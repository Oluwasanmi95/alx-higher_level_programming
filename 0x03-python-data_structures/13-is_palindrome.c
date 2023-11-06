#include "lists.h"
/**
 * is_palindrome - determines if linked list is a palidrome
 * @head: head of linked list
 *
 * Return: 1 if liked list, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int length = 0, *sequence, i = 0, mid;

	if (*head == NULL)
		return (1);
	if ((*head)->next == NULL)
		return (0);
	temp = *head;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	sequence = malloc(sizeof(int) * length);
	temp = *head;
	while (i < length)
	{
		sequence[i++] = temp->n;
		temp = temp->next;
	}
	if (length % 2 != 0)
		length++;
	mid = length / 2;
	length--;
	for (i = 0; length != mid; i++, length--)
	{
		if (sequence[i] != sequence[length])
			return (0);
	}
	return (1);
}
