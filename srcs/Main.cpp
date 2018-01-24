//
// Main.cpp for  in /home/ze/308reedpipes
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Jan  8 21:58:16 2018 ze
// Last update Wed Jan 24 10:16:22 2018 DESKTOP-FQFT07H
//

#include "Main.hpp"

void				launch(int ac, char **av)
{
  //n f x y
  if (ac != 5)
    throw (Err("Wrong Number of arguments"));
  Data data;
  data.setN(atoi(av[1]));
  data.setFile(av[2]);
  data.setX(atoi(av[3]));
  data.setY(atoi(av[4]));
  data.Parse();
  data.PrintInfo();
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
