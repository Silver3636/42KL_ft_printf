/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:29:30 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/05 14:51:57 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Writes pointer address and returns the lenght of the address*/
int	ft_put_ptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_put_hex(ptr, 'x');
	return (len);
}
