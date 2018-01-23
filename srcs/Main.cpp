//
// Main.cpp for  in /home/ze/308reedpipes
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Jan  8 21:58:16 2018 ze
// Last update Fri Jan 19 12:20:28 2018 DESKTOP-FQFT07H
//

#include "Main.hpp"

void				launch(int ac, char **av)
{
  if (ac != 5)
    throw (Err("Wrong Number of arguments"));
  Data data(av);
}

int				main(int ac, char **av)
{
  try
    {
      launch(ac, av);
    }
  catch (Err &err)
    {
      err.print_msg();
      return (84);
    }
  return (0);
}
