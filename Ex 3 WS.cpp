#include<iostream>
int main()
{
	int count=1,sum=0,val;
	std::cout<<"Enter the number till which the sum has to be calculated : ";
	std::cin>>val;
	while(count<=val)
	       { sum += count;
	         count=count+1;
		   }
	std::cout<<"Sum of 1 to "<<val<<" is "<<sum<<std::endl;
	return 0;
}
