#include <iostream>
#include <ctype.h>

int main() {
	float num1, num2;
	char op;
	 std::cout<<"please type your number : \n";
	 std::cin>>num1;
	 if(std::cin.fail()){
		 std::cout<<"please enter a valid number\n";
		}
	 else{
		 std::cout<<"you choosed :"<<num1<< std::endl;
	 }
     std::cout<<"please type your second number : \n";
	 std::cin>>num2;
	 if(std::cin.fail()){
		 std::cout<<"please enter a valid number\n";
		}
	 else{
		 std::cout<<"you choosed :"<<num2<< std::endl;
	 }
     std::cout<<"enter an operator :"<<std::endl;
     op = std::tolower(op);
    
     

    
}
