/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uniquenum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagha <nagha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:53:01 by nagha             #+#    #+#             */
/*   Updated: 2025/01/13 13:12:59 by nagha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_uniquenum(char **str)
{
	int	i;
	int	j;
	int	num1;
	int	num2;

	i = 0;
	while (str[i])
	{
		num1 = ft_atoi(str[i]);
		j = i + 1;
		while (str[j])
		{
			num2 = ft_atoi(str[j]);
			if (num1 == num2)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
