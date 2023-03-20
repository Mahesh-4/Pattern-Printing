#include <iostream>  
using namespace std;   
int main()  
{  
    char ch='A';    
    int i, space, j, k,rows;   
    cout<<"Enter the number of rows";
    cin>>rows; 
    for(i=1;i<=rows;i++)    
    {    
        for(space=rows;space>=i;space--)    
            cout<<" ";    
        for(j=1;j<=i;j++)    
            cout<<ch++;
            ch--;    
        for(k=1;k<i;k++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  