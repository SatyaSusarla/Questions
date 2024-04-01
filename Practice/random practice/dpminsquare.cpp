#include <iostream>
#include <climits>
using namespace std;
 
int minCount(int n)
 
{
 
    int* minSquaresRequired = new int[n + 1];
 
    minSquaresRequired[0] = 0;
 
    minSquaresRequired[1] = 1;
 
    for (int i = 2; i <= n; ++i)
 
    {
 
        minSquaresRequired[i] = INT_MAX;
 
        for (int j = 1; i - (j * j) >= 0; ++j)
 
        {
 
            minSquaresRequired[i]
                = min(minSquaresRequired[i],
                      minSquaresRequired[i - (j * j)]);
        }
 
        minSquaresRequired[i] += 1;
    }
 
    int result = minSquaresRequired[n];
 
    delete[] minSquaresRequired;
 
    return result;
}
 
// Driver code
int main()
{
    cout << minCount(6);
    return 0;
}