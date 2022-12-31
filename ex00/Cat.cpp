/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:24 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/31 17:09:05 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "(CAT)    Constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "(CAT)    Destructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "(CAT)    Copy constructur called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout <<  "(CAT)    Copy assginemt operator " << std::endl;
	this->type = obj.type;
	return (*this);
}

void Cat::makeSound(void)const{
	std::cout << "Cat make sound meeew (🐈)" << std::endl;
}
