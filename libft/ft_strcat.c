/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:05:29 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/13 16:27:04 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int end;

	i = 0;
	end = ft_strlen(s1);
	while (s2[i])
	{
		s1[end + i] = s2[i];
		i++;
	}
	s1[end + i] = '\0';
	return (s1);
}
