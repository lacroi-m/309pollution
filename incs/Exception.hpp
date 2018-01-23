//
// Exception.hpp for  in /home/ze/308reedpipes
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Jan  8 21:58:35 2018 ze
// Last update Mon Jan  8 21:58:35 2018 ze
//

#ifndef __EXCEPTION_HPP__
# define __EXCEPTION_HPP__

# include <iostream>
# include <string>
# include <exception>

class					Err : public std::exception
{
private:
  std::string				_msg;

public:
  //Ctor
  Err(std::string);
  //Dtor
  ~Err(void) throw ();
  //Member
  void					print_msg(void);
  //Setter
  void					set_msg(std::string);
  //Getter
  std::string				get_msg(void);
};

#endif /* ! __EXCEPTION_HPP__ */
