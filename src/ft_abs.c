/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:52:24 by thopgood          #+#    #+#             */
/*   Updated: 2024/07/16 21:36:20 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *returns the absolute value of a long
 */
long	ft_abs(long n)
{
	long	n_long;

	n_long = n;
	return (n_long *= ((n_long > 0) - (n_long < 0)));
}
