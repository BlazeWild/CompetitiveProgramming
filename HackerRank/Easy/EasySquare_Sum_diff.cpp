#include <iostream>
using namespace std;

int main()
{
    int testcases;
    int num;
    long long sum_squares;
    long long square_sum;
    long long diff;

    cin >> testcases;
    for(int i=0; i<testcases; i++)
    {
        cin >> num;
        square_sum = 0;
        sum_squares=0;
        for(int j=1;j<=num;j++)
        {
            sum_squares+= j*j;
            square_sum+= j;
        }

        square_sum *= square_sum;

        diff = square_sum - sum_squares;
        cout << diff << endl;
    }
    return 0;
}
