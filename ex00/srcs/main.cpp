/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:15:25 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/30 13:13:05 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main ()
{
    std::vector<int> vector_cont;
    std::list<int>   list_cont;
    
    vector_cont.push_back(-3);    
    vector_cont.push_back(1);    
    vector_cont.push_back(1);
    vector_cont.push_back(0);

    list_cont.push_back(1);
    list_cont.push_back(2);
    list_cont.push_back(3);
    
    try
    {
        std::cout << ::easyfind(vector_cont, -3) << std::endl;
        std::cout << ::easyfind(vector_cont, 0) << std::endl;
        std::cout << ::easyfind(vector_cont, 1) << std::endl;
        std::cout << ::easyfind(vector_cont, 4) << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << "Not found" << std::endl;
    }
    try
    {
        std::cout << ::easyfind(list_cont, 3) << std::endl;
        std::cout << ::easyfind(list_cont, 1) << std::endl;
        std::cout << ::easyfind(list_cont, 0) << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << "Not found" << std::endl;
    }
    return (0);
}