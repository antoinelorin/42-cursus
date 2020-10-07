/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_len.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:38:44 by anradix           #+#    #+#             */
/*   Updated: 2020/06/08 00:31:29 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

size_t	s_len(const char *s, size_t len, char c)
{
	return (!s || *s == c || !*s) ? len : s_len(s + 1, len + 1, c);
}
