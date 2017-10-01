/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jostraye <jostraye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:48:48 by jostraye          #+#    #+#             */
/*   Updated: 2017/09/29 17:25:30 by jostraye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict str1, const char *restrict str2, size_t len)
{
	size_t i;
	size_t j;

	if (len == 0)
		return (0);
	i = 0;
	while (str1[i] && i < len)
		i++;
	j = i;
	while (i < len - 1)
	{
		str1[i] = str2[i - j];
		i++;
	}
	if (i < len)
		str1[i] = '\0';
	i = j + ft_strlen(str2);
	return (i);
}
