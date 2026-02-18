/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:17:55 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 13:36:57 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <exception>

class Base {
	public:
		virtual	~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};