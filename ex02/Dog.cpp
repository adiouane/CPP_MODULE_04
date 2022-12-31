/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:30 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/31 20:35:48 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = other;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = other.type;
    *this->brain = *other.brain;
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
