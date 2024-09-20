/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:15:25 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/20 14:10:16 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main ()
{
    std::vector<int> vector_cont;
    
    vector_cont.push_back(3);    
    vector_cont.push_back(1);    
    vector_cont.push_back(1);
    vector_cont.push_back(21);
    vector_cont.push_back(12);
    vector_cont.push_back(11);
    vector_cont.push_back(0);
    
    try
    {
        std::cout << ::easyfind(vector_cont, 3) << std::endl;
        std::cout << ::easyfind(vector_cont, 0) << std::endl;
        std::cout << ::easyfind(vector_cont, 1) << std::endl;
        std::cout << ::easyfind(vector_cont, 4) << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << "Not found" << std::endl;
    }
    return (0);
}