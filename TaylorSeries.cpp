//Lucas Manker
//Just messing around with taylor series

#include <iostream>
#include <string>

int fact(int n);
int power(int x, int n);
double euler(int x);
double cos(int x);
double sin(int x);

int main()
{
	std :: cout << euler(4) << std :: endl;
	std :: cout << cos(2) << std :: endl;
	std :: cout << sin(2) << std :: endl;
}

double euler(int x){
	double num, denom;
	double result = 0;
	int i = 0;
	while(i < 8){
		num = power(x, i);
		denom = fact(i);
		result += num/denom;
		i++;
	}
	return result;
}

double cos(int x){
	double num, denom;
	double result = 0;
	int i = 0;
	while(i < 8){
		num = power(x, (2*i));
		denom = fact(2*i);
		result += (power(-1, i)*(num/denom));
		i++;
	}
	return result;
}

double sin(int x){
	double num, denom;
	double result = 0;
	int i = 0;
	while(i < 8){
		int exp = (2*i) + 1;
		num = power(x, exp);
		denom = fact(exp);
		result += (power((-1),i)*(num/denom));
		i++;
	}
	return result;
}

 int fact(int n){
	 int i = 1;
	 int result = 1;
	 while(i <= n){
		 result *= i;
		 i++;
	 }
	 return result;
 }
 
 int power(int x, int n){
	 if(n == 0){
		 return 1;
	 }
	 int result = x;
	 int i = 1;
	 while(i < n){
		 result *= x;
		 i++;
	 }
	 return result;
 }