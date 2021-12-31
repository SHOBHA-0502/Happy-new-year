#include<bits/stdc++.h>
using namespace std ;
int main(){
    int p ;
    cin>> p;
    int n ;
    n = p/2+1;
    for(int i =1 ; i<n ; i++){
        for(int j = i;j<=n;j++){
            cout<<" ";
        }
        for(int k =1; k<=i; k++){
            cout<<"*";

        }
        for(int l =1; l<i ; l++){
            cout<<"*";

        }
        cout<<endl ;
    }
    for(int i =1 ; i<=n ; i++){
        for(int j = 1;j<=i;j++){
            cout<<" ";
        }
        for(int k =i; k<=n; k++){
            cout<<"*";

        }
        for(int l =i; l<n ; l++){
            cout<<"*";

        }
        cout<<endl ;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main(){
    int p ;
    cin>> p;
    int n ;
    n = p/2+1;
    for(int i =1 ; i<n ; i++){
        for(int j = i;j<n;j++){
            cout<<" ";
        }
        for(int k =1; k<=i; k++){
            cout<<"*";

        }
        for(int l =1; l<i ; l++){
            cout<<"*";

        }
        cout<<endl ;
    }
    for(int i =1 ; i<=n ; i++){
        for(int j = 1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k =i; k<=n; k++){
            cout<<"*";

        }
        for(int l =i; l<n ; l++){
            cout<<"*";

        }
        cout<<endl ;
    }
}

    

