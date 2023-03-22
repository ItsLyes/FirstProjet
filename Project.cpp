#include <iostream>
#include <ctype.h>

int main() {
	float num1, num2;
	char op;
    std::cout<<"*************************"<<std::endl;
     std::cout<<"Welcome to calculator"<<std::endl;
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
		 std::cout<<"you choosed : "<<num2<< std::endl;
	 }
     std::cout<<"enter an operator ( x , / , + , - ):"<<std::endl;
     std::cin>>op;
     op = std::tolower(op);
    if(op=='x'){
        std::cout<<"you choosed to do "<<num1<<" "<<op<<" "<<num2<<std::endl;
        std::cout<<"your result is : "<<num1*num2<<std::endl;
        std::cout<<"*************************"<<std::endl;
    }
    if(op=='/'){
        std::cout<<"you choosed to do "<<num1<<" "<<op<<" "<<num2<<std::endl;
        std::cout<<"your result is : "<<num1/num2<<std::endl;
        std::cout<<"*************************"<<std::endl;
    }
    if(op=='+'){
        std::cout<<"you choosed to do "<<num1<<" "<<op<<" "<<num2<<std::endl;
        std::cout<<"your result is : "<<num1+num2<<std::endl;
        std::cout<<"*************************"<<std::endl;
    }
    if(op=='-'){
        std::cout<<"you choosed to do "<<num1<<" "<<op<<" "<<num2<<std::endl;
        std::cout<<"your result is : "<<num1-num2<<std::endl;
        std::cout<<"*************************"<<std::endl;
    }
}
