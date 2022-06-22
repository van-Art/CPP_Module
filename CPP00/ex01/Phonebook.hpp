#include "Contact.hpp"
#include <iostream>

class Phonebook
{
	private:
			Contact contacts[8];
			int		size;
			int		index;
	public:
			Phonebook() : size (0), index (0) {}
			int		get_size(void) const;
			void	add_contact(std::string data[5]);
			void	show_contact(int i) const;
			void	show_phonebook(void) const;
};
