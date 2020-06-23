// Author: Jesus Carlos Martinez Gonzalez
// Date: 20/06/2020
// Solution to: https://www.coursera.org/learn/algorithmic-toolbox/programming/b66y2/programming-assignment-2-algorithmic-warm-up/submission
// Language: C++
// Problem to solve: Given an integer n, find the last digit of the nth Fibonacci number Fn (that is, Fn mod 10).

#include <iostream>
#include <vector>

using namespace std;

// Logic: Initialize a vector of unsigned long longs "vect" to store the already calculated elements of the series...
// ... push 1 onto the vector twice, push onto the vector the remainded of the last two elements of the vector and 10, return the last element on vect
unsigned long long fibo_last_dig(int n) {
	vector<unsigned long long> vect;
	vect.push_back(1);
	vect.push_back(1);
	int i = 2;
	while (i < n) {
		vect.push_back((vect[i - 1] + vect[i - 2]) % 10);
		i++;
	}
	return vect[n - 1];
}

int main() {
	int n = 0;
	unsigned long long res = 0;
	cin >> n;
	res = fibo_last_dig(n);
	cout << res << endl;
	return 0;
}

