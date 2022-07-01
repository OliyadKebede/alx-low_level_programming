#include "hash_tables.h"
/**
  * create hash table function.
  * @size: size of the hash table.
  * Return: pointer to the created new hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *create_table;

	if (size <= 0)
		return (NULL);
	create_table = malloc(sizeof(hash_table_t));
	if (!create_table)
		return (NULL);
	create_table->size = size;
	create_table->array = malloc(size * sizeof(hash_node_t *));
	if (!create_table->array)
	{
		free(create_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		create_table->array[i] = NULL;
	return (create_table);
}
