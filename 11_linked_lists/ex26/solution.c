/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/09/12 10:43:57 by shobeedev // learn the why,              */
/*   Updated: 2026/09/12 11:23:21 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include "list.h"

#define SIZE 5

node*	create_node(void)
{
	node	*tmp;

	tmp = malloc(sizeof(node));
	tmp->prev = NULL;
	tmp->data = 0;
	tmp->next = NULL;

	return (tmp);
}

void	add_at_end(node **head, int data)
{
	node*	tmp;
	node*	ptr;

	tmp = create_node();
	tmp->data = data;
	if (*head == NULL)
	{
		*head = tmp;
		return ;
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = tmp;
	tmp->prev = ptr;
}

void	print_lst(node* head)
{
	if (!head)
	{
		printf("The list is empty!!\n");
		return ;
	}
	while (head)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

node*	delete_at_mid(node* head)
{
	node*	slow;
	node*	fast;
	node*	tmp;
	node*	next;

	if (!head)
		return (NULL);
	if (head->next == NULL)
	{
		free(head);
		return (NULL);
	}
	slow = head;
	fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		tmp = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	next = slow->next;
	tmp->next = next;
	if (next != NULL)
		next->prev = tmp;
	free(slow);
	return (head);
}

void	free_lst(node** head)
{
	node*	next;
	node*	ptr;

	ptr = *head;
	while (ptr)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}

int		main(void)
{
	srand((unsigned)time(NULL));
	node*	head;
	int		size;
	int		i;

	head = NULL;
	size = rand() % (SIZE + 1);
	i = 0;
	while (i < size)
	{
		add_at_end(&head, rand() % (CHAR_MAX + 1));
		i++;
	}
	print_lst(head);
	head = delete_at_mid(head);
	print_lst(head);
	free_lst(&head);
	return (0);
}

