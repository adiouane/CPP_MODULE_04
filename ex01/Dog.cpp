/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:30 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/31 18:56:07 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "(Dog)    constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog(void)
{
    std::cout << "(Dog)    destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "(Dog)    copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = obj;
}


Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "(Dog)    assignation operator called" << std::endl;
    this->type = obj.type;
    *this->brain = *obj.brain;
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "Woo" << std::endl;
}

Brain* Dog::getBrain(void)const
{
    return this->brain;
}
