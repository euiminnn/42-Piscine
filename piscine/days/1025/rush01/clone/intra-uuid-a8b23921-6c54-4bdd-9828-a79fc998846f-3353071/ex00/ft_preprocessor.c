/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preprocessor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:12:34 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 21:35:29 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_pre_shape(char **argv)       //숫자-공백-숫자-.. 맞는지
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')     
    {   
        if (i % 2 != 0)     //i가 홀수일 때는 공백이어야 함
        {   
            if (!(argv[1][i] == ' '))  //아니면
            {   
                return (1);    //틀렸다
            }   
        }   
		else        //i가 짝수일 때는 1~4사이여야 함
        {   
            if (!('1' <= argv[1][i] && argv[1][i] <= '4'))     //아니면
            {   
                return (1);       //틀렸다
			}   
        }   
        i++;
    }   
	return (0);
}   

int ft_pre_length(char **argv)       //n(숫자+공백) = 31맞는지
{   
    int i;
    
    i = 0;
    while (argv[1][i] != '\0')        
    {   
        i++;
    }
    if (i != 31)
    {   
        return (1);
    }   
    return (0);
}   