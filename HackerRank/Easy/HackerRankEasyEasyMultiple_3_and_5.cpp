//sum of multiples of 3 and 5 below number n
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int testcases;
    long long num;
    
    cin >> testcases;
    vector<int> number(testcases);
    //input
    for (int i=0; i< testcases; i++)
    {
        cin >> num;
        number[i] = num;
    }
    //calculation

    for (int j=0; j<testcases; j++ )
    {
        long long sum=0;
        for (int k = 0; k <number[j]; k++)
        {
            if(k%3 == 0 || k%5==0)
            {
                sum+=k;
            }
        }
        //output
        cout << sum << endl;    
    }
    return 0;
}
