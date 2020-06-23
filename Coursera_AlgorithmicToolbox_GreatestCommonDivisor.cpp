// Author: Jesus Carlos Martinez Gonzalez
// Date: 22/06/2020
// Solution to: https://www.coursera.org/learn/algorithmic-toolbox/programming/b66y2/programming-assignment-2-algorithmic-warm-up/submission
// Language: C++
// Problem to solve: Given two integers 𝑎 and 𝑏, find their greatest common divisor.

#include <iostream>

using namespace std;

// Logic: Given two unsigned long longs a and b, if they're the same, return a (either works), alternatively, return gcd with b and the remainder of a and b
unsigned int gcd(unsigned int a, unsigned int b) {
	if (b == 0)  return a;
	return gcd(b, a % b);
}

int main() {
	unsigned int a = 0, b = 0;
	unsigned int res = 0;
	cin >> a >> b;
	res = gcd(a, b);
	cout << res << endl;
    return 0;
}
