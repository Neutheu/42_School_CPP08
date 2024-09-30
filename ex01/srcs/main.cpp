/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:04:32 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/30 13:49:22 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <deque>

int main()
{
    Span sp_large = Span(100001);
    Span sp = Span(100);
    std::deque<int> deque_container;

    for (int i = 0; i < 100000; i++)
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
        sp_large.addNumber(deque_container.begin(), deque_container.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp_large.shortestSpan() << std::endl;
        std::cout << sp_large.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}