/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:48:28 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/25 13:04:05 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
    private:
    unsigned int        max_elem;
    std::vector<int>    vec_cont;

    public:
    Span();
    Span(unsigned int N);
    Span(const Span &src);
    Span    &operator=(const Span &rhs);
    ~Span();
    void    addNumber(int nb);
    int     shortestSpan();
    int     longestSpan();
    template <typename ite> void    addNumber(ite begin_it, ite end_it)
    {
        unsigned int nbElemToAdd = std::distance(begin_it, end_it);
        if (nbElemToAdd + this->vec_cont.size() < this->max_elem)
            this->vec_cont.insert(this->vec_cont.end(), begin_it, end_it);
        else
        {
            this->vec_cont.insert(this->vec_cont.end(), begin_it, begin_it + (this->max_elem - this->vec_cont.size()));
            throw std::exception();
        }
    }
  
};

#endif