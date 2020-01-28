/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:16:28 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/28 11:21:23 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

int ft_putmap(t_map *ans)
{
    int i;

    if  (ans->line_count == 0)
    {
        ft_putstr("!empty map!");
        return (-1);
    }
    else
    {
        i = 0;
        while (i < ans->line_count)
        {
            ft_putstr(ans->map[i]);
            ft_putstr("\n");
            i++;
        }
        return (0);
    }
}