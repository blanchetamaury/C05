/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:11:59 by amblanch          #+#    #+#             */
/*   Updated: 2024/07/20 16:12:01 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	j;

	j = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 1)
	{
		nb = nb * j;
		--power;
	}
	return (nb);
}
