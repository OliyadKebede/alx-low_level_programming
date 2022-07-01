#include "hash_tables.h"
/**
 * create_node - creates a new key-value entry
 * @key: key to add
 * @value: value to add to key
 * Return: the node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *create_new_node;

	if (!key || strlen(key) <= 0 || !value)
		return (NULL);
	create_new_node = malloc(sizeof(hash_node_t));
	if (create_new_node == NULL)
		return (NULL);
	create_new_node->key = strdup(key);
	if (create_new_node->key == NULL)
	{
		free(create_new_node);
		return (NULL);
	}
	create_new_node->value = strdup(value);
	if (create_new_node->value  == NULL)
	{
		free(create_new_node->key);
		free(create_new_node);
		return (NULL);
	}
	create_new_node->next = NULL;
	return (create_new_node);
}
/**
  * hash_table_set - set a key:value pair
  * @ht: Hash table to set
  * @key: key to set
  * @value: value to set at key
  * Return: 1 on success, 0 on failure
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *create_new_node, *tmp;

	create_new_node = NULL;
	if (!ht || !key || strlen(key) <= 0 || *key <= 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strncmp(key, tmp->key, strlen(key)) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value ? 1 : 0);
		}
		tmp = tmp->next;
	}
	create_new_node = create_node(key, value);
	if (create_new_node == NULL)
		return (0);
	create_new_node->next = ht->array[index];
	ht->array[index] = create_new_node;
	return (1);
}
