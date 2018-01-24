//
// Data.cpp for  in /mnt/c/Users/ze/Desktop/gitshit/309/309pollution
// 
// Made by DESKTOP-FQFT07H
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Tue Jan 23 20:19:29 2018 DESKTOP-FQFT07H
// Last update Wed Jan 24 10:55:45 2018 DESKTOP-FQFT07H
//

#include "Data.hpp"

Data::Data(void)
{
}

Data::~Data(void)
{
}

void				Data::setFile(char *f)
{
  std::ifstream myfile(f);
  std::string	  line;
  while (getline(myfile, line))
    file.push_back(line);
}



void				Data::PrintInfo()
{
  std::cout << "n = " << n << std::endl;
  std::cout << "file ="  << std::endl;
  for (size_t x = 0; x < file.size(); x++)
    std::cout << "\t" << file[x] << std::endl;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "graph ="  << std::endl;
  for (size_t x = 0; x < graph.size(); x++)
    std::cout << "\t" << graph[x].getX()<< ":" <<  graph[x].getY() << ":" <<  graph[x].getP() << std::endl;
}

void				Data::Parse()
{
  int		xP;
  int		yP;
  int		p;
  std::string	str;
  
  for (size_t z = 0; z < file.size(); z++)
    {
      str = file[z];
      xP = stoi(str.substr(0, str.find(";")));
      str = str.substr(str.find(";") + 1, str.size());
      yP = stoi(str.substr(0, str.find(";")));
      str = str.substr(str.find(";") + 1, str.size());
      p = stoi(str.substr(str.find(";") + 1));
      graph.push_back(Graph(xP, yP, p));
    }

  std::sort(graph.begin(), graph.end(), less_than_key());  
}
