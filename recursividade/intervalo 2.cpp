 #include <iostream>
 using namespace std;

 void sequ(int a, int b){


    if(a>b)
        return sequ(b,a);

    else{
        if(a<b){
            sequ(a+1,b);
            cout<<a<<" "<<endl;


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
