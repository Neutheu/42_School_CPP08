/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:04:32 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/25 13:16:55 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <deque>

int main()
{
    Span sp = Span(100);
    std::deque<int> deque_container;

    for (int i = 0; i < 100; i++)
    {
        deque_container.push_back(i);
    }

    try
    {   
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(11);
        sp.addNumber(deque_container.begin(), deque_container.end());
    }
    catch (const std::exception e)
    {
        std::cout << "container is full" << std::endl;
    }
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    return 0;
}