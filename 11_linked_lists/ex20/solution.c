/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/09/11 12:05:53 by shobeedev // learn the why,              */
/*   Updated: 2026/09/11 12:30:06 by shobeedev // not only the how.           */
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

node*	add_at_beg(node*	head, int data)
{
	node*	tmp;

	tmp = create_node();
	tmp->data = data;

	head->prev = tmp;
	tmp->next = head;
	head = tmp;
	return(head);
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
	head = add_at_beg(head, 1337);
	head = add_at_beg(head, 42);
	print_lst(head);
	free_lst(&head);
	return (0);
}


