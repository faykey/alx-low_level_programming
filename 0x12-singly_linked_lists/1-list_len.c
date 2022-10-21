#include "lists.h"
/**
 * list_len - returns number of elements
 * @h: node pointer
 * Description: returns number of elements
 * Return: size
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
