/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/09/12 12:07:14 by shobeedev // learn the why,              */
/*   Updated: 2026/09/12 12:15:24 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include "list.h"

#define SIZE 50

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

int		find_max_val(node* head)
{
	int		max;

	max = 0;
	if (!head)
		return (max);
	max = head->data;
	head = head->next;
	while (head)
	{
		if (head->data > max)
			max = head->data;
		head = head->next;
	}
	return (max);
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
	int		max;
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
	max= find_max_val(head);
	printf("The Maximum Value in the Linked List : %d\n", max);
	free_lst(&head);
	return (0);
}

