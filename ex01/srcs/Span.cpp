/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:10:24 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/25 12:57:36 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() 
{
    this->max_elem = 0;
}

Span::Span(unsigned int N)
{
    this->max_elem = N;
}

Span::Span(const Span &src)
{
    *this = src;
}

Span    &Span::operator=(const Span &rhs)
{
    this->max_elem = rhs.max_elem;
    return (*this);
}

Span::~Span() {}

void    Span::addNumber(int nb)
{
    if (this->vec_cont.size() < this->max_elem)
        this->vec_cont.push_back(nb);
    else
        throw std::exception();
}

int     Span::shortestSpan()
{
    int shortestSpan;
    
    std::sort(this->vec_cont.begin(), this->vec_cont.end());
    shortestSpan = this->vec_cont[1] - this->vec_cont[0];

    for (unsigned int i = 1; i < this->vec_cont.size() - 1; i++)
    {
        if (shortestSpan > this->vec_cont[i + 1] - this->vec_cont[i])
            shortestSpan = this->vec_cont[i + 1] - this->vec_cont[i];
    }
    return (shortestSpan);
}

int     Span::longestSpan()
{
    std::vector<int>::iterator min_it;
    std::vector<int>::iterator max_it;

    min_it = std::min_element(this->vec_cont.begin(), this->vec_cont.end());
    max_it = std::max_element(this->vec_cont.begin(), this->vec_cont.end());
    return (*max_it - *min_it);
}