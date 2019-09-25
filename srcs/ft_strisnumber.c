/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:17:03 by anjansse          #+#    #+#             */
/*   Updated: 2019/09/24 22:19:35 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strisnumber(char *num)
{
	size_t		i;

	i = -1;
	while (++i < ft_strlen(num))
		if (!ft_isdigit(num[i]))
			return (0);
	return (1);
}
