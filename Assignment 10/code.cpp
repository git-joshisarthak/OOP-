 #include <iostream>
using namespace std;
int main() {
int a,b,c;
cout<<"enter the no. a:";
cin>>a;
cout<<"enter the no.b:";
cin>>b;
 try
 {
    if(b==0)
    {throw b;}
    c=a/b;
    cout<<"\ndiv is"<<c;
 }
 catch(int x)
 {
    cout<<"arithmatic error\n";
    cout<<"divide by"<<x;
}
cout<<"after div op.";
return 0;
}
   
