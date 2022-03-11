#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal &copy);
		virtual ~WrongAnimal();
		WrongAnimal & operator = ( WrongAnimal const & value );
		std::string getType() const;
		void		setType(std::string type);
		virtual	void makeSound() const;
};
#endif