#include<iostream>
int main()
{
	int choice=0;
	std::cout<<"Enter your choice : "<<std::endl<<"1 for coffee"<<std::endl<<"2 for tea"<<std::endl;
	std::cin>>choice;
	if(choice==1)
	        {
	        	std::cout<<"Your coffee is on its way.Thank you";
			}
	else if(choice==2)
	        {
	        	std::cout<<"Your tea is on its way.Thank you";
			}
	else
	        {
	        	std::cout<<"Invalid choice";
			}
	return 0;
}
