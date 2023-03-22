#include <iostream>

int main() {
	float num1, num2;
	char op;
	 std::cout<<"please type your number : \n";
	 std::cin>>num1;
	 if(std::cin.fail()){
		 std::cout<<"please enter a valid number\n";
		}
	 else{
		 std::cout<<"you choose :"<<num1<< std::endl;
	 }
}
