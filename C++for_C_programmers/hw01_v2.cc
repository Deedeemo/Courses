/* Convert this program to C++

 *1. change to C++ io

 *2. change to one line comments

 *3. change defines of constants to const

 *4. change array to vector<>

 *5. inline any short function

 */

#include <iostream>     // std::cout
#include <vector>       // std::vector

using namespace std;

//3. change defines of constants to const
const int N = 40;

//5. inline any short function
template <class add>
inline add sum(vector<add> data)
{
	add p = 0;

	for(int i = 0; i < data.size(); ++i)
		p += data.at(i);

	return p;
}

int main()
{
	//4. change array to vector<>
	std::vector <int> data(N);

	for (int i = 0; i < N; i++){
		data[i] = i;
	}

	//1. change to C++ io
	cout << "Sum is: " << sum<int>(data) << endl;

	return 0;
}
