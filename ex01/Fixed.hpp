/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:51:48 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/11 02:19:32 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <string>

class Fixed {
	public:
		Fixed();
		Fixed (const float init);
		Fixed (const int init);
		Fixed( const Fixed& origin);
		~Fixed();
		Fixed&	operator=(const Fixed& origin);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

	private:
		int _value;
		static const int _fract_bytes = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const &rhs );

#endif