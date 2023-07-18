#include <iostream>
using namespace std;

bool isPrime(long long number)
{

    long long varr = (long long) (number/2) + 1;
    
    if (number <= 1)
        return false;

    if (number <= 3){
        return true;
    }
    else
    {
        for(long long j=2; j <= varr ; j++)
        {

            if(number%j == 0)
            {
                return false;
            }else{
                varr = (long long)(number/j) + 1;
            }
            
        }
        
        return true;
        
    }  
}


int main()
{
    long long num,primeFactor,temp;
    int testcases;

    cin >> testcases;
    
    
    for (int j=0; j< testcases; j++)
    {
        cin >> num;
        if(isPrime(num))
        {
            primeFactor= num;
        }
        else
        {
            for (long long i=2; i < num; i++)
            {
                if(num % i==0)
                {
                    temp = num/i;
                    if(isPrime(temp))
                    {
                        primeFactor = temp;
                        break;
                    }    
                }   

            }
        }
        
    
        cout << primeFactor << endl;
        
    }

    
    
    return 0;
}
