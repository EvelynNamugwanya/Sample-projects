#include<iostream>
/*prompt a user  for the amount of each foreign currency
Enter number of Colombian Pesos:
Enter number of Brazilian Reais:
Enter number of Peruvian Soles:  
__step2__

convert the amount entered by the user and display the total amount of USD.
US Dollars = $______

*/
int main(){
float Pesos, Reais, Soles, Dollars;

std::cout<<"Enter number of Colombian Pesos:"<<std::endl;
std::cin>>Pesos;
std::cout<<"Enter number of Brazilian Reais:"<<std::endl;
std::cin>>Reais;
std::cout<<"Enter number of Peruvian Soles:"<<std::endl;
std::cin>>Soles; 
//mexican to usd 
float rate1 = 0.049;//1pesos = 0.049 usd
//Brazilian to usd
 float rate2 = 0.19;//1Reais = 0.19 usd 

float rate3 = 0.26;//1Sole =0.26 usd
Dollars=0.0;
 Dollars= ((Pesos * rate1) + (Reais * rate2) + 
 (Soles * rate3));

 std::cout<<"US Dollars = $______"<< Dollars<<std::endl;


}