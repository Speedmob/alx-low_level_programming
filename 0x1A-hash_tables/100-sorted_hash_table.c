#include "hash_tables.h"
void sm(shash_table_t *ht, shash_node_t *n, shash_node_t *t, const char *k);
/**
 * shash_table_create - Creates a sorted hash table.
 * @size: size of sorted hash table.
 *
 * Return: new sorted hash table, NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht); }
/**
 * sm - adds element extension
 * @ht: ht
 * @n: new
 * @t: tmp
 * @k: key
 */
void sm(shash_table_t *ht, shash_node_t *n, shash_node_t *t, const char *k)
{
	if (!ht->shead)
	{
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n; }
	else if (strcmp(ht->shead->key, k) > 0)
	{
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n; }
	else
	{
		t = ht->shead;
		while (t->snext && strcmp(t->snext->key, k) < 0)
			t = t->snext;
		n->sprev = t;
		n->snext = t->snext;
		if (!t->snext)
			ht->stail = n;
		else
			t->snext->sprev = n;
		t->snext = n; }}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: sorted hash table.
 * @key: key.
 * @value: value.
 *
 * Return: 0 (Failure), 1 (Success)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	char *vcopy;
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	vcopy = strdup(value);
	if (!vcopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = vcopy;
			return (1); }
		tmp = tmp->snext; }
	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		free(vcopy);
		return (0); }
	new->key = strdup(key);
	if (!new->key)
	{
		free(vcopy);
		free(new);
		return (0); }
	new->value = vcopy;
	new->next = ht->array[index];
	ht->array[index] = new;
	new->sprev = NULL;
	sm(ht, new, tmp, key);
	return (1); }
/**
 * shash_table_get - get value of a key
 * @ht: sorted hash table.
 * @key: key.
 *
 * Return: value of key, NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node && strcmp(node->key, key) != 0)
		node = node->snext;
	return (node ? node->value : NULL); }
/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", "); }
	printf("}\n"); }
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->stail;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
			printf(", "); }
	printf("}\n"); }
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (!ht)
		return;
	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp; }
	free(head->array);
	free(head); }
