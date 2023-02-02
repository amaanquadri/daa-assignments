#include <iostream>

using namespace std;

int main()
{
    int arr[9]={3,2,6,7,1,4,5,9,8};
    cout<<"Enter number between 1 to 9:";
    int n;
    cin>>n;
    for(int i=0;i<9;i++){
        if(arr[i]==n){
            cout<<"Index of you entered number in arr is:"<<i<<endl;
            break;
        }
    }
    return 0;
}