/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:51:48 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/11 03:52:22 by tedelin          ###   ########.fr       */
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
		Fixed( const Fixed& other);
		~Fixed();
		Fixed&	operator=(const Fixed& other);
		
		bool operator>(const Fixed& rhs) const;
		bool operator>=(const Fixed& rhs) const;
		bool operator<(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator==(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		
		float	operator+(const Fixed& rhs) const;
		float	operator-(const Fixed& rhs) const;
		float	operator*(const Fixed& rhs) const;
		float	operator/(const Fixed& rhs) const;
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
		
		static const Fixed&		min(const Fixed& nb1, const Fixed& nb2);
		static const Fixed&		max(const Fixed& nb1, const Fixed& nb2);
		static Fixed&			min(Fixed& nb1, Fixed& nb2);
		static Fixed&			max(Fixed& nb1, Fixed& nb2);

	private:
		int _value;
		static const int _fract_bytes = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const &rhs );

#endif