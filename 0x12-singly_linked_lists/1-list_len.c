#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointers to the printed list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
