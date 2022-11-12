#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"

#define all(x) (x).begin(), (x).end()
#define in INT_MAX

int main(int argc,char const * argv[]){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string a="",b="";

        loop(i,0,n-1){
            if(s[i]=='0'){
                a+='0';
                b+='0';
            }
            else if(s[i]=='1'){
                if(a>b){
                    a+='0';
                    b+='1';
                }
                else{
                    a+='1';
                    b+='0';
                }
            }
            else{
                if(a>b){
                    b+='2';
                    a+='0';
                }
                else if(a==b){
                    b+='1';
                    a+='1';
                }
                else{
                    a+='2';
                    b+='0';
                }
            }
        }
        cout<<a nn <<b nn;
    }
    
    return 0;
}