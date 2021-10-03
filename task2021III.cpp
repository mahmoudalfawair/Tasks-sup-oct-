#include <iostream>
using namespace std;
int main()
{
int arr[3]={3,6,53};
for(int i = 0; i <= 2 ; i++)
if(arr[i] %3 == 0)
cout << arr[i] << " divisbile by 3"<< endl; 
else 
cout << arr[i] << " not divisible by 3" << endl;



return 0;
}