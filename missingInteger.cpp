#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) 
{
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int counter = 1;
    
    for (const auto &i: A)
    {
        if (counter < i)
        {
            return counter;
        }
        else if (counter > i)
        {
            continue;
        }
        else
        {
            counter++;
        }
    }
    return counter;
}

int main() 
{
	vector<int> A = {21, 78, -1, 0, 3, 11, 33, 33, 33, 3, 2};
	// your code goes here
	int sol = solution(A);\
	cout << sol;
	return 0;
}
