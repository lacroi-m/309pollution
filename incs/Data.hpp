//
// Data.hpp for  in /mnt/c/Users/ze/Desktop/gitshit/309
// 
// Made by DESKTOP-FQFT07H
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Wed Jan 17 22:38:11 2018 DESKTOP-FQFT07H
// Last update Fri Jan 19 12:21:29 2018 DESKTOP-FQFT07H
//

#ifndef  __DATA_HPP__
# define  __DATA_HPP__

class		Data
{
private:
  int				n;
  int				x;
  int				y;
  std::vector<std::string>	file;
public:
  Data();
  Data(char **av)
  {
    std::ifstream myfile(av[2]);
    std::string	  line;
    while (getline(myfile, line))
      file.push_back(line);
    for (size_t x = 0; x < file.size(); x++)
      std::cout << file[x] << std::endl;    
  }
  ~Data(){}
  void				setN(int _n){n = _n;}
  void				setX(int _x){x = _x;}
  void				setY(int _y){y = _y;}
  int				getN(){return n;}
  int				getX(){return x;}
  int				getY(){return y;}
  std::vector<std::string>	getFile(){return file;}
};

#endif /* ! __MAIN_HPP__ */
