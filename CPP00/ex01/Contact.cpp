#include "Contact.hpp"

const std::string&		Contact::get_firstname() const
{
		return (this->firstname);
}

const std::string&		Contact::get_lastname() const
{
		return (this->lastname);
}

const std::string&		Contact::get_birthday() const
{
		return (this->birthday);
}

const std::string&		Contact::get_phone() const
{
		return (this->phone);
}

const std::string&		Contact::get_email() const
{
		return (this->email);
}

void	Contact::set_firstname(std::string firstname)
{
		this->firstname = firstname;
}

void	Contact::set_lastname(std::string lastname)
{
		this->lastname = lastname;
}

void	Contact::set_birthday(std::string birthday)
{
		this->birthday = birthday;
}

void	Contact::set_phone(std::string phone)
{
		this->phone = phone;
}

void	Contact::set_email(std::string email)
{
		this->email = email;
}
