#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: key to add.
 * @value: value of key.
 *
 * Return: 0 (Failure), 1 (Success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *vcopy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	vcopy = strdup(value);
	if (!vcopy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcopy;
			return (1); }}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(vcopy);
		return (0); }
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0); }
	new->value = vcopy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1); }
