
#include <bits/stdc++.h>
using namespace std;

void printKthBit(unsigned int n, unsigned int k)
{
	cout << ((n & (1 << (k - 1))) >> (k - 1));
}

int main()
{
	unsigned int n = 5, k = 0;

	printKthBit(n, k);
	return 0;
}
