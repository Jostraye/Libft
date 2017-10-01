/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jostraye <jostraye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 19:55:03 by jostraye          #+#    #+#             */
/*   Updated: 2017/09/29 17:24:31 by jostraye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*d;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (d == NULL)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		d[i] = (char)s1[i];
		i++;
	}
	i = 0;
	while (i <= ft_strlen(s1) + ft_strlen(s2))
	{
		d[i + ft_strlen(s1)] = (char)s2[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
