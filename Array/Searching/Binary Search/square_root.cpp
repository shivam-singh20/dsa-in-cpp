#include <iostream>
using namespace std;

int Square_root(int num)
{
    //if(num<2){return num};
    int ans,mid,start=0,end=num;

    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==num){  //To remove overflow use mid==num/mid;
            ans=mid;
            break;
        }
        else if(mid*mid<num){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}


int main (){
    int num;
    cout<<"Enter the number whose square root is to be found: ";
    cin>>num;
    cout<<"Square root of "<<num<<" is "<<Square_root(num);
    return 0;
}