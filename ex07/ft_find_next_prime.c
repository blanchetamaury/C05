/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:32:00 by amblanch          #+#    #+#             */
/*   Updated: 2024/07/21 16:32:02 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find(int nb)
{
	int	i;
	int	a;

	i = 2;
	while (i < nb)
	{
		a = nb % i;
		if (a == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	j;

	j = 0;
	if (nb == 0 || nb == 1 || nb < 0)
		return (2);
	while (j != 1)
	{
		j = ft_find(nb);
		if (j == 0)
			++nb;
	}
	return (nb);
}
