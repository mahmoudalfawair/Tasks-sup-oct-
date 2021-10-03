#include <iostream>
using namespace std;
int main()
{
int arr1[10] = {0};
int arr2[10] = {0};
for(int i = 0 ; i <= 9; i++)
cin >> arr1[i];

for(int j = 0 ; j <=9; j++)
arr2[j] = arr1[j];

for(int x = 0 ; x <= 9; x++)
cout << arr2[x] << endl;

return 0;

}