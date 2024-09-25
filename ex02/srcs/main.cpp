/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:12:11 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/25 15:20:45 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "----------" << std::endl;
    
    std::list<int> list_test;
    list_test.push_back(5);
    list_test.push_back(17);
    std::cout << list_test.back() << std::endl;
    list_test.pop_back();
    std::cout << list_test.size() << std::endl;
    list_test.push_back(3);
    list_test.push_back(5);
    list_test.push_back(737);
    //[...]
    list_test.push_back(0);
    std::list<int>::iterator it_list = list_test.begin();
    std::list<int>::iterator ite_list = list_test.end();
    ++it_list;
    --it_list;
    while (it_list != ite_list)
    {
        std::cout << *it_list << std::endl;
        ++it_list;
    }
    return 0;
}