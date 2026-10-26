/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabusala <rabusala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:53:01 by nagha             #+#    #+#             */
/*   Updated: 2025/01/13 16:25:45 by rabusala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int arc, char **arv)
{
	char	**inputs;
	int		val;

	inputs = spliter(arc, arv);
	if (!inputs)
		ft_exit(1, NULL);
	handler(inputs);
	val = inserter(inputs);
	if (val != 0)
		ft_exit(2, inputs);
	ft_exit(3, inputs);
}
