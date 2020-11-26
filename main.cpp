#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int f,f1,f2;
   for (int i=2; i<100; i++)
    {
        for (int j=2; j<i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j+1)
                {
                f1=f2=1;
                for(int k=2;k<=11;k++)
                    {
                        f=f1+f2;
                        f1=f2;
                        f2=f;
                        if(f==i)
                            {
                                cout<<"simple numbers Fibonacci is "<<f<<endl;
                                cout<<"ordinal number of the Fibonacci simple number is "<<k+1<<endl<<" \n";
                            }
                    }
                }
        }
   }
    return 0;
}
