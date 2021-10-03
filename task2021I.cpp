#include <iostream>
using namespace std;
int main()
{
int arr[10]={0};
for(int i = 0 ; i <= 9 ; i++)
cin >> arr[i];

for(int i = 0 ; i <= 9 ; i++)
{
    if(arr[i]%2 == 0)
    cout << arr[i] << " is " << "even." << endl;
    else
    cout << arr[i] << " is " << "odd." << endl;
}


}