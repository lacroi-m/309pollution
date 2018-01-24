//
// Data.hpp for  in /mnt/c/Users/ze/Desktop/gitshit/309
// 
// Made by DESKTOP-FQFT07H
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Wed Jan 17 22:38:11 2018 DESKTOP-FQFT07H
// Last update Wed Jan 24 10:55:15 2018 DESKTOP-FQFT07H
//

#ifndef  __DATA_HPP__
# define  __DATA_HPP__

#include "Deps.hpp"

class		Graph
{
private:
  int				x;
  int				y;
  int				p;
public:
  Graph(int _x, int _y, int _p)
  {
    x = _x;
    y = _y;
    p = _p;
  }
  ~Graph(void){}
  int				getX(){return x;}
  int				getY(){return y;}
  int				getP(){return p;}
};

class		Data
{
private:
  int				n;
  int				x;
  int				y;
  std::vector<std::string>	file;
  std::vector<Graph>		graph;
  
public:
  Data(void);
  ~Data(void);
  void				setN(int _n){n = _n;}
  void				setFile(char *f);
  void				setX(int _x){x = _x;}
  void				setY(int _y){y = _y;}
  int				getN(){return n;}
  std::vector<std::string>	getFile(){return file;}
  int				getX(){return x;}
  int				getY(){return y;}

  void				Parse();
  void				PrintInfo();
};

struct less_than_key
{
  inline bool operator() (Graph& struct1, Graph& struct2)
  {
    return (struct1.getX() < struct2.getX());
  }
};


#endif /* ! __MAIN_HPP__ */
