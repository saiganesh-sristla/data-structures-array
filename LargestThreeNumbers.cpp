#include <bits/stdc++.h>
using namespace std;

void largestThreeNumbers(int arr[], int n)
{

    if (n < 3)
    {
        cout << "Array should contain atleast 3 elements";
        return;
    }

    int first = arr[0];
    int second = INT32_MIN;
    int third = INT32_MIN;

    for (int i = 1; i < n; i++)
    {
        int currElement = arr[i];
        if (currElement > third)
        {
            if (currElement > second)
            {
                if (currElement > first)
                {
                    third = second;
                    second = first;
                    first = currElement;
                }
                else
                {
                    third = second;
                    second = currElement;
                }
            }
            else
            {
                third = currElement;
            }
        }
    }

    cout << first << " " << second << " " << third;
}

int main()
{
    int arr[] = {10, 4, 3, 50, 23, 90};

    largestThreeNumbers(arr, 6);

    return 0;
}