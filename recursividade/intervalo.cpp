 #include <iostream>
 using namespace std;

 void sequ(int a, int b){


    if(a>b)
        return sequ(b,a);

    else{
        if(a<b){
            cout<<a<<" "<<endl;
            sequ(a+1,b);

        }
        if(a==b)
            cout<<b<<" "<<endl;

    }

 }

 int main(){

    int x,y;
    cin>>x;
    cin>>y;
    sequ(x,y);


 }
