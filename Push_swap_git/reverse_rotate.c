/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:59:50 by matomas           #+#    #+#             */
/*   Updated: 2024/10/15 13:00:04 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Brings the bottom element of a stack to the top. */

static void	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tail;
	t_stack	*new_tail;

	tail = get_bottom(*stack);
	new_tail = before_bottom(*stack);
	tmp = *stack;
	*stack = tail;
	(*stack)->next = tmp;
	new_tail->next = NULL;
}

/*	Brings the bottom element of stack a to the top.
	Prints "rra" to the standard output. */

void	do_rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
	ft_putstr("rra\n");
}

/*  Brings the bottom element of stack b to the top. 
    Prints "rrb" to the standard output. */

void	do_rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
	ft_putstr("rrb\n");
}

/*	Brings the bottom element of both stack a and stack be to the top of 
	their stacks. Prints "rrr" to the standard output. */

void	do_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_putstr("rrr\n");
}
