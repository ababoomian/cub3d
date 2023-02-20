/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:08:11 by vrsargsy          #+#    #+#             */
/*   Updated: 2023/01/15 22:08:13 by vrsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

int	is_valid_map(char *s, char *s2)
{
	int	i;

	i = 0;
	while (ft_strlen(s) != 4 && s)
		s++;
	if (!s || *s == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
