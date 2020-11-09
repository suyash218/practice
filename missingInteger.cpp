/*Write a function:

int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].
*/

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
