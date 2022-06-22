#include <string>

class Contact
{
	private:
			std::string		firstname;
			std::string		lastname;
			std::string		birthday;
			std::string		phone;
			std::string		email;
	public:
			const std::string&	get_firstname(void) const;
			const std::string&	get_lastname(void) const;
			const std::string&	get_birthday(void) const;
			const std::string&	get_phone(void) const;
			const std::string&	get_email(void) const;
			void				set_firstname(std::string firstname);
			void				set_lastname(std::string lastname);
			void				set_birthday(std::string birthday);
			void				set_phone(std::string phone);
			void				set_email(std::string email);
};
