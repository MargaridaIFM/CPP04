/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:47:40 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/07 18:52:24 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
	std::string ideas[100];

    public:
	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);

	std::string getIdea(int index) const;
};

#endif