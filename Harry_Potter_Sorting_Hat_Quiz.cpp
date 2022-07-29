/*The Hogwarts School  welcomes you! First-year students must go through the annual Sorting Ceremony.

The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to:

gryffindor
hufflepuff
ravenclaw
slytherin

Write a sortinghat.cpp program that asks the user some questions and places them into one of the four Houses based on their answers!
*/
#include <iostream>
 
int main() {
/* 
Every time the Muggle-born quiz taker answers a question, they should receive points to one or more Houses.

Let’s declare four int variables:*/

int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0;

/*Let’s declare another four int variables to store each of their answers to the four quiz questions:*/

int answer1, answer2, answer3, answer4;
/*Let’s add a std::cout statement that tells the Muggle that they have started the quiz with the phrase The Sorting Hat Quiz!.*/

std::cout<<"****The Sorting Hat Quiz!***"<<std::endl;

std::cout<<"Q1) When I'm dead, I want people to remember me as:"<<std::endl;

std::cout<<"1) The Good"<<std::endl;
std::cout<<"2) The Great"<<std::endl;
std::cout<<"3) The Wise"<<std::endl;
std::cout<<"4) The Bold"<<std::endl;
//store answer in ans 1
std::cin>>answer1;

/*Merlin’s beard! We have the user’s answer but now we need… conditionals & logic.*/
if(answer1 == 1)
{

   hufflepuff = +1;

}else if(answer1 == 2)
{
slytherin = +1;
}else if(answer1 == 3){

ravenclaw = +1;

}else if(answer1 == 4){

  gryffindor = +1;

}else{
  std::cout<<"Invalid output"<<std::endl;
}

/*Question 2) Dawn or Dusk?*/
std::cout<<"Question 2) Dawn or Dusk?"<<std::endl;
std::cout<<" 1) Dawn"<<std::endl;
std::cout<<" 2) Dusk"<<std::endl;
//get and store input from qn 2 in answer 2
std::cin>>answer2;

if(answer2 == 1){
  gryffindor = +1;
  ravenclaw = +1;

}else if(answer2 == 2){
  hufflepuff = +1;
  slytherin = +1;
}else{
  std::cout<<"Invalid input"<<std::endl;
}

std::cout<<"Q3) Which kind of instrument most pleases your ear?"<<std::endl;

std::cout<<"1) The violin "<<std::endl;

std::cout<<"2) The trumpet "<<std::endl;

std::cout<<"3) The piano "<<std::endl;

std::cout<<"4) The drum "<<std::endl;

std::cin>>answer3;

if (answer3 == 1){
  slytherin = +1;
}else if(answer3 == 2){
  hufflepuff = +1;
}else if(answer3 == 3){
  ravenclaw = +1;
}else if(answer3 == 4){
  gryffindor = +1;
}else{
  std::cout<<"Invalid input"<<std::endl;
}

std::cout<<"Q4) Which road tempts you most?"<<std::endl;

std::cout<<" 1) The wide, sunny grassy lane"<<std::endl;

std::cout<<" 2) The narrow, dark, lantern-lit alley"<<std::endl;

std::cout<<"3) The twisting, leaf-strewn path through woods"<<std::endl;

std::cout<<"4) The cobbled street lined (ancient buildings)"<<std::endl;

std::cin>>answer4;

if(answer4 == 1){
  hufflepuff = +1;

}else if(answer4 == 2){
  slytherin = +1;

}else if(answer4 == 3){
  gryffindor =+1;
}else if(answer4 == 4){
  ravenclaw = +1;

}else{
  std::cout<<"Invalid input"<<std::endl;
}
/*Now we need to find out which of the four Houses has the highest answer!

We will need another variable called max that starts at 0 and an empty string with:*/

int max =0;
std::string house;
if (gryffindor > max) {
 
  max = gryffindor;
  house = "Gryffindor";
 
}else if (hufflepuff > max) {
 
  max = hufflepuff;
  house = "Hufflepuff";
 
}else if (ravenclaw > max) {
 
  max = ravenclaw;
  house = "Ravenclaw";
 
}else if (slytherin > max) {
 
  max = slytherin;
  house = "Slytherin";
 
}
 
std::cout << house << "!\n";





  // The magic starts here
 
}


