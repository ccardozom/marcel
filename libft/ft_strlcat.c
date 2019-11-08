/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:58:38 by ccardozo          #+#    #+#             */
/*   Updated: 2019/11/07 15:05:29 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	if (size > a + 1)
		return (0);
	while (src[b] != '\0')
		b++;
	if (size == a + 1)
		b = b + (size - 1);
	else
		b = b + size;
	return (b);
}
