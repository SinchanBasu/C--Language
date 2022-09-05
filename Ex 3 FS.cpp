#include<iostream>
int main()
{
	int sum=0,val;
	std::cout<<"Enter the number till which it has to be calculated : ";
	std::cin>>val;
	for(int i=1;i<=val;i++)
	          { sum += i;
			  }
	std::cout<<"Sum of 1 to "<<val<<" is "<<sum<<std::endl;
	return 0;
}
