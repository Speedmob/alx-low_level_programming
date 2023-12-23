#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char cflag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (cflag)
				printf(", ");
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", "); }
			cflag = 1; }}
	printf("}\n"); }
