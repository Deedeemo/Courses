/* Convert this program to C++

 * change to C++ io

 * change to one line comments

 * change defines of constants to const

 * change array to vector<>

 * inline any short function

 */

#include <stdio.h>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

//#define N 40
const int N = 40;

//void sum(int*p, int n, int d[])
int sum (int n)
{

	//int i;

	//*p = 0;
	int summ = 0;

	for(int i = 0; i < n; ++i)
	//*p = *p + d[i];
	summ = summ + i;

	return summ;
}

int main()

{
	cout << "sum is " << sum(N) << endl;
	return 0;

}
