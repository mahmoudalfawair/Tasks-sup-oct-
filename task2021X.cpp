#include <iostream>
using namespace std;
int main()
{
int arr[10]= {0};
for(int i = 0 ; i <=9 ; i++)
cin >> arr[i];

for(int j = 0 ; j <= 9 ; j++)
if(arr[j] >= 3 && arr[j] <= 8)
cout <<arr[j];

return 0 ;
}