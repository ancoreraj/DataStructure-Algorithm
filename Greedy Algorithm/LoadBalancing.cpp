#include <bits/stdc++.h>
using namespace std;

int main()
{

    
    while (1)
    {
        int n;
        cin >> n;

        if(n==-1){
            break;
        }
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int q = sum / n;
        if (q > 0 && sum % n == 0)
        {
            int currSum = 0;
            int sumLeft = 0;
            int currRes = 0;
            int maxRes = 0;
            for (int i = 0; i < n; i++)
            {
                currSum += arr[i];
                currRes = abs(currSum - (q*(i+1)));
                if (currRes > maxRes)
                {
                    maxRes = currRes;
                }
            }

            cout << maxRes << endl;
        }
        else
        {
            cout << "-1\n";
        }
        
    }

    return 0;
}