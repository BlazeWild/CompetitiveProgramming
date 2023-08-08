
//sum of multiples of 3 and 5 below number n
// If we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is . Find the sum of all the multiples of  or  below .


#include <iostream>
#include <vector>
using namespace std;

int main()
{

    long long testcases;
    cin >> testcases;
    vector <long long> number(testcases);

    for (long long i=0 ; i< testcases; i++)
    {
        cin >> number[i];
    }

    //for each testcases
    for (long long j=0 ; j < testcases; j++)
    {
        long long sum_3=0;
        long long sum_5=0;

        long long temp_sum_3=0;
        long long temp_sum_5=0;

        long temp_sum_common=0;
        long long sum_common=0;

        long long result;

        //for sum due to 3;
        long long n1 = (number[j]-1)/3;
        for (long long i=1; i<= n1; i++)
        {
            temp_sum_3 += i;
        }

        sum_3 = 3 * temp_sum_3;

        //for sum due to 5;
        long long n2 = (number[j]-1)/5;
        for (long long i=1; i<= n2; i++)
        {
            temp_sum_5 += i;
        }

        sum_5 = 5 * temp_sum_5;

        //subtracting common terms
        long long n3;
        n3 = (number[j]-1)/ 15;

        for(long long i=1; i<= n3; i++)
        {
            temp_sum_common += i;
        }

        sum_common = 15* temp_sum_common;

        result = sum_3 + sum_5 - sum_common;

        cout << result<< endl;
    }
    return 0;
}
