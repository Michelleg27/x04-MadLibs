//Authors: 
#include <iostream>
#include <string>

int main()
{
std::string adj; 
char Let;
int num; 
std::string adj2; 

std::cout<<"Adjective\n";
std::cin>>adj; 
std::cout<<"Letter\n"; 
std::cin>>Let; 
std::cout<<"Number\n"; 
std::cin>>num; 
std::cout<<"Adjective 2\n"; 
std::cin>>adj2; 

std::cout<<"Once upon a time there was a "<<adj<<" princesss.\n"; 
std::cout<<"Her favorite thing to do was to go around the castle\n";
std::cout<<"and turn anything that starts with the letter "<<Let<<" into a cat.\n";
std::cout<<"At the end of the day she had "<<num<<" new cats.\n";
std::cout<<"Her parents were very "<<adj2<<".\n";

  return 0;
}
