#include "Phonebook.hpp"

void	print(std::string str)
{
	unsigned int i;

	i = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		i = 0;
		while(i++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
}

int		Phonebook::get_size() const
{
	return (this->size);
}

void	Phonebook::add_contact(std::string data[5])
{
	int		index;

	index = this->index;
	this->contacts[index].set_firstname(data[0]);
	this->contacts[index].set_lastname(data[1]);
	this->contacts[index].set_birthday(data[2]);
	this->contacts[index].set_phone(data[3]);
	this->contacts[index].set_email(data[4]);
	this->index = (index + 1) % 8;

	if (this->size < 8)
			this->size++;
}

void	Phonebook::show_contact(int i) const
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Contact information for specified index  |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	std::cout << "First Name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Birthday: " << this->contacts[i].get_birthday() << std::endl;
	std::cout << "Phone: " << this->contacts[i].get_phone() << std::endl;
	std::cout << "Email: " << this->contacts[i].get_email() << std::endl;
}

void	Phonebook::show_phonebook() const
{
	int i;

	i = 0;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|first name| last name|  birthday|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i < this->size)
	{
		std::cout << "|         ";
		std::cout << i;
		std::cout << "|";
		print(this->contacts[i].get_firstname());
		std::cout << "|";
		print(this->contacts[i].get_lastname());
		std::cout << "|";
		print(this->contacts[i].get_birthday());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}
