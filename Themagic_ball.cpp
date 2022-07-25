#include <iostream>
#include <cstdlib>

/****

The Magic 8-Ball is a super popular toy used for fortune-telling or seeking advice, developed in the 1950s!

Write a magic8.cpp program that will output a random fortune each time it executes.
****/




int main()
{

  std::cout<<"MAGIC 8-BALL:****";
  //to get a different random number at each time
  //This sets the seed for the random generator
  std::srand(time(NULL));
  int answer =std::rand()%10;//% is modulo symbol that returns the reminder.
  std::cout<<"your fortune number is.. "<<answer<<std::endl;

  if(answer == 0){
    std::cout<<"It is certain"<<std::endl;
} else if(answer == 10)
{
    std::cout<<"very doubtfull"<<std::endl;
} else if(answer == 1){
    std::cout<<"Without a doubt"<<std::endl;
} else if(answer == 2){
    std::cout<<"Most likely"<<std::endl;
} else if(answer == 3){
    std::cout<<"Most likely not"<<std::endl;
} else if(answer == 4){
    std::cout<<"Signs point to yes"<<std::endl;
} else if(answer == 5){
    std::cout<<"My sources say no"<<std::endl;
} else if(answer == 6){
    std::cout<<"Reply hazy, try again"<<std::endl;
} else if(answer == 7){
    std::cout<<"Reply this is 8"<<std::endl;
} else if(answer == 8){
    std::cout<<"Concentrate and ask again"<<std::endl;
} else if(answer == 9){
    std::cout<<"Concentrate and ask again"<<std::endl;
}

}


