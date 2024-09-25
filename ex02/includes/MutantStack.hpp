/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:45:38 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/25 15:13:23 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T, typename Container = std::deque<T> > class MutantStack : public std::stack<T, Container>
{
    public:
    MutantStack() {}
    MutantStack(const MutantStack &src)
    {
        *this = src;
    }
    MutantStack &operator=(const MutantStack &rhs)
    {
        (void)rhs;
        return (*this);
    }
    ~MutantStack() {}
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
    const_iterator begin() const
    {
        return (this->c.begin());
    }
    const_iterator end() const
    {
        return (this->c.end());
    }
};

#endif