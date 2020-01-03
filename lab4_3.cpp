#include<iostream>
#include<cmath>

using namespace std;

int findDivisor(int i){
    int j = 2;
    while (j>0)
    {
        if (i%j == 0 )
        {
            return j;
        }else{
        	j++;
		}
        
    }
    
}

int main()
{
	int i;
	cout << "Enter i = ";
    cin >> i;
    

    cout << "result = " << findDivisor(i);



	
	return 0;
}


