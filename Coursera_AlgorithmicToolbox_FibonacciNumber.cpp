// Author: Jesus Carlos Martinez Gonzalez
// Date: 19/06/2020
// Solution to: https://www.coursera.org/learn/algorithmic-toolbox/programming/b66y2/programming-assignment-2-algorithmic-warm-up/submission
// Language: C++
// Problem to solve: Given an integer 𝑛, find the 𝑛th Fibonacci number 𝐹𝑛.

#include <vector>

using namespace std;

// Logic: Create a vector "vect", push 1 twice into vect, initialize i as 0 and while i < n, if i is not either 0 nor 1... 
// ... push to vect the sum of it's last two elements, regardless of the value of i, add 1 to it, once i is equal to n return the last value on vect
int fibo(int n) {
	vector<int> vect;
	vect.push_back(1);
	vect.push_back(1);
	int i = 0;
	while (i < n) {
		if (i != 0 && i != 1) {
			vect.push_back(vect[i - 1] + vect[i - 2]);
		}
		i++;
	}
	return vect[n - 1];
}

