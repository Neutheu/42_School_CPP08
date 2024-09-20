/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:15:41 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/20 14:09:59 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T> unsigned long   easyfind(T container, int nb)
{
    typename T::iterator it = container.begin();
    for (unsigned long i = 0; i < container.size(); i++)
    {
        if (*it == nb)
            return (i);
        std::advance(it, 1);
    }
    throw std::exception();
    return (0);
}

#endif