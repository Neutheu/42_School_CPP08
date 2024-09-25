/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:15:41 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/25 12:29:36 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T> unsigned long   easyfind(T container, int nb)
{
    typename T::iterator it_begin = container.begin();
    typename T::iterator it_end = container.end();
    typename T::iterator it_value = std::find(it_begin, it_end, nb);
    if (it_value != it_end)
        return (std::distance(it_begin, it_value));
    throw std::exception();
    return (0);
}

#endif