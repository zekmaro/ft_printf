/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:59:43 by anarama           #+#    #+#             */
/*   Updated: 2024/04/23 11:57:09 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	ft_printf("print % p", "String");
	ft_printf(" \n");
	printf("print %ü", "String");
}
// spaces after % and a flag
// just %
// null in s, null in p
// nothing
// nulls in d and i
// > int max, < int min, int min
// %%%
// % and random letter
// % and not a letter