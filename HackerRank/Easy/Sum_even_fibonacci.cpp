//sum of even fibonacci sequence generated by adding two terms. whose value doesnot exceed 
#include <iostream>
using namespace std;

int main()
{
    int testcases;
    long long num,a,b,c;
    long long sum;


    cin >> testcases;
    for(int i=0; i<testcases; i++)
    {
        cin >> num;
        a=1;b=2;sum=0;
        do       
        {

            if(a%2==0)
            {
                sum+=a;
            }
            c=a+b;
            a=b;
            b=c;
             
        } while (a<num);
        cout << sum << endl;
    }    
}
