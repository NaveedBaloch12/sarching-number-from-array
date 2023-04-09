#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "How many numbers to be entered: ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Positive Integer: ";
        cin >> array[i];
    }
    cout << "Enter key to search: ";
    cin >> key;
    
    for (int i = 0; i < n; i++)
    {
        if(array[i] == key)
        {
            cout<<"\nThe index on which "<<key<<" stored is: "<<i<<endl;
            break;
        }
        if (i == n-1)
    	{
    		cout<<"\nNo number found."<<endl;
	}
    }
    
        return 0;
}
