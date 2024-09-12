/*
name: Jake Sweat
program:Calculator
date:9/12/24
extra:
*/

#include <iostream>
int main(){
float numA, numB, inc, dec;
std::cout << "enter a number: " << std::endl;
std::cin >> numA;
std::cout << "enter another number: " << std::endl;
std::cin >> numB;

float add = numA + numB;
float sub = numA - numB;
float mul = numA * numB;
float div = numA / numB;
float mod = (int)numA % (int)numB;
inc = numA ++;
dec = numB ++;
float bigBOy = add *1000;
  std::cout << "Addition: " << add << std::endl;  
     std::cout << "Subtract: " << sub << std::endl;  
     std::cout << "Multiply: " << mul << std::endl;  
      std::cout << "Divide: " << div << std::endl;  
       std::cout << "Mod: " << mod << std::endl;  
       std::cout << "Increment the first number: " << inc << std::endl;  
       std::cout << "Decrement the second number: " << dec << std::endl; 
        std::cout << "Mulitply by 1k: " << bigBOy << std::endl; 
    return 0;
}