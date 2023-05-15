/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:51:48 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/11 01:14:46 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
	public:
		Fixed();
		Fixed( const Fixed& origin);
		~Fixed();
		Fixed&	operator=(const Fixed& origin);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int _value;
		static const int _fract_bytes = 8;
};

#endif