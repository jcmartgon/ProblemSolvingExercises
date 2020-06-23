// Author: Jesus Carlos Martinez Gonzalez
// Date: 22/06/2020
// Solution to: https://www.coursera.org/learn/algorithmic-toolbox/programming/b66y2/programming-assignment-2-algorithmic-warm-up/submission
// Language: C++
// Problem to solve: Given two integers a and b, find their least common multiple.

#include <iostream>

using namespace std;

// Logic: Given two unsigned long longs a and b, if they're the same, return a (either works), alternatively, return gcd with b and the remainder of a and b
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (b == 0)  return a;
    return gcd(b, a % b);
}

// Logic: Given two unsigned long longs a and b, if they're the same, returh a (either works), alternatively, return the division of the product of and b...
// ... and the gcd of a and b
unsigned long long lcm(unsigned long long a, unsigned long long b) {
    if (a == b) return a;
	return (a * b) / gcd(a, b);
}

int main() {
	unsigned long long a = 0, b = 0;
	unsigned long long res = 0;
	cin >> a >> b;
	res = lcm(a, b);
	cout << res << endl;
	return 1;
}