/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:30 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/31 17:08:46 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "(DOG)    Constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "(DOG)    Destructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "(DOG)    Copy constructur called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout <<  "(DOG)    Copy assginemt operator " << std::endl;
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound(void)const{ 
	std::cout << "Dog make sound  hoow (🐕) " << std::endl;
}
