/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:41:50 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/11 14:41:54 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rush02(int x, int y)
{
    int rows, lines;

    rows = 1;
    lines = 1;

    while(x >= rows && y >= lines)
    {
        if(rows == 1 && lines == 1 || rows == x && lines == 1)
        {
            ft_putchar('A');
        }
        else if(rows == 1 && lines == y || rows == x && lines == y)
        {
            ft_putchar('C');
        }
        if(lines == 1 && rows > 1 && rows < x || lines == y && rows < x && rows > 1)
        {
            ft_putchar('B'); /* print do B na 1 e ultima linha */
        }
        else if(rows == 1 && lines > 1 && lines < y || rows == x && lines > 1 && lines < y)
        {
            ft_putchar('B');
        }
            if (rows > 1 && rows < x && lines > 1 && lines < y){
            ft_putchar(' ');
            }
            if(rows == x){
                ft_putchar('\n');
            }
        
        
        if(rows < x){
            rows++;
        } else {
            lines++;
            rows = 1;
        }
        /*
        if(rows == x)
            ft_putchar('\n');
*/
    }

