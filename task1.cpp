#include<iostream>
using namespace std;

main ()
{


//	tast 1


//	int n, i = 2;
//	string res;
//	
//	cout << "Enter a number to find whether it is a prime number or not: ";
//	cin >> n;
//	while ( i < n && n % i != 0)
//	{
//		i++;
//	}
//	if ( i == n)
//	{
//		res = "Prime Number.";
//	} 
//	else {
//		res = "Not a prime number.";
//	}
//	
//	cout << res;

	
//	task 2

//	int n, sum = 0, r;
//	
//	cout << "Enter value to find the sum of each digit in it: ";
//	cin >> n;
//	
//	while ( n > 0 ) 
//	{
//		r = n % 10;
//		sum += r;
//		n /= 10;
//	}
//	
//	cout << "The sum is = " << sum;



// task 3

//	int n, i, j;
//	
//	cout << "Enter the number of rows you want to print: ";
//	cin >> n;
//	
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1 ; j <= n; j++)
//		{
//			cout << j;
//		};
//		cout << endl;
//	};



//	task 4

//	int n, i, j;
//	
//	cout << "Enter the number of rows you want to print: ";
//	cin >> n;
//	
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1 ; j <= i; j++)
//		{
//			cout << j;
//		};
//		cout << endl;
//	};


//	task 5

//	int n, i, j, num;
//	
//	cout << "Enter the number of rows you want to print: ";
//	cin >> n;
//
//	num = 1;
//	for ( i = 1; num <= n; ++i)
//	{
//		for ( j = 1; j <= i; ++j)
//		{			
//			cout << num++;
//		}
//		cout << endl;
//	}


	
//	int n, i, j, k, l;
//	
//	cout << "Enter the number of rows you want to print: ";
//	cin >> n;
//	
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1 ; j <= i; j++)
//		{
//			cout << j;
//		};
//		cout << endl;
//	};
//	
//	for ( k = n - 1; k > 0; k--)
//	{
//		for (l = 1; l <= k; l++)
//		{
//			cout << l;
//		}
//		cout << endl;
//	}



//	task 6

//	int n, i, j, num;
//	
//	cout << "Enter the number of rows: ";
//	cin >> n;
//	
//	for ( i = 1; i <= n; i++)
//	{
//		num = 1;
//		for (j = 1; j <= i; j++)
//		{
//			cout << num;	
//			num+=2;
//		}
//		cout << endl;
//	}
	
	
	
	int n, i, j;
	
	cout << "Enter the number of rows: ";
	cin >> n;
	
	for ( i = 1; i <= n*2; i+=2)
	{
		for (j = 1; j <= i; j+=2)
		{
			cout << j;
		}
		cout << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
