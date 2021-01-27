// C++ program to count minimum
// steps to reduce a number
#include <cmath>
#include <iostream>

using namespace std;

int countways(int n)
{
	if (n == 0)
		return 0;
	else if (n % 3 == 0)
		return 1 + countways(n / 3);
	else if(n%2==0)
        return 1 + countways(n/2);
    else return 1 + countways(n-1);
}


int main()
{
	int n;
    cin >> n;

	cout << countways(n) << "\n";

	return 0;
}
