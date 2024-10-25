  //A. Create A New String
  #include<iostream>
#include<string>
using namespace std;
int main(){
   string name;
   string nam;
   cin>>name;
   cin>>nam;

   cout<<name.length()<<" "<< nam.length()<<endl;


   cout<<name<<" "<<nam;
    return 0;
}

//B. Let's use Getline
#include<iostream>
#include<string>
using namespace std;
int main(){
   string name;
  getline(cin,name,'\\');
   cout<<name;
    return 0;
}

//D. Strings
#include<iostream>
#include<string>
using namespace std;
int main(){
   string name,nam;
  cin>>name>>nam;
  cout<<name.length()<<" "<<nam.length()<<endl;
   cout<<name<<nam<<endl;
   int temp;
   temp=name[0];
   name[0]=nam[0];
   nam[0]=temp;
   cout<<name<<" "<<nam;
    return 0;
}
//E -- count
#include<iostream>
#include<string>
using namespace std;
int main(){
   string name;
  cin>>name;
  int len =name.length();
  int sum=0;
  for(char c: name){
    sum=sum+c-'0';
    /*আমরা একটি স্ট্রিং S ইনপুট নিচ্ছি।
for লুপের মাধ্যমে প্রতিটি অক্ষর (c) স্ট্রিং থেকে নিচ্ছি।
c - '0' দিয়ে অক্ষরকে ডিজিটে রূপান্তর করছি (এটি করা হয় কারণ ASCII মানে '0' হলো 48, আর কোনো সংখ্যা ধরার জন্য '0' বাদ দিলে সঠিক সংখ্যা পাওয়া যায়)।
প্রতিটি ডিজিটকে যোগ করে sum এ রাখছি।
অবশেষে যোগফল প্রিন্ট করছি।*/
  }


   cout<<sum<<endl;

    return 0;
}
//F - Way Too Long Words

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
   string name;
  cin>>name;
  int len =name.length();
  if (len>10){
  cout <<name[0]<<len-2<<name[len-1]<<endl;
  }
  else{
    cout<<name<<endl;
  }
    }
    return 0;
}
G - Conversion
#include<iostream>
#include<string>
using namespace std;
int main(){

   string name;
  cin>>name;
  for(char &c: name){
     if (c==','){
        c=' ';
     }
     else if(isupper(c)){
        c=tolower(c);
     }

      else if(islower(c)){
        c=toupper(c);
     }
  }
    cout<<name<<endl;


    return 0;
}

//H. Good or Bad

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        if (a.find("101")!=string ::npos || a.find("010")!=string ::npos)
        {
            cout << "Good"<<endl;

        }
        else
        {
            cout << "Bad"<<endl;
        }

}
}
//palindrime
#include<iostream>
#include<string>
using namespace std;

int main()
{

        string a;
        string b;
        int i,j;
        cin>>a;
        int len=a.length();
        b.resize(len);
        for (i=len-1,j=0;i>=0;i--,j++){

                b[j]=a[i];
            }

         if (b==a){


        cout<<"YES"<<endl;

        }
        else{
             cout<<"NO"<<endl;
        }
}
//count
#include<iostream>
#include<string>
using namespace std;

int main()
{

        string a;

        int i;
        cin>>a;
        int arr[26]={0};


        for (char c: a){
             arr[c-'a']++;

            }

           for (i=0;i<26;i++){
           if(arr[i]>0){

        cout<<char(i+'a')<<" : "<<arr[i]<<endl;


           }
}}


//M - Subsequence String
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string target="hello";
    int j=0;
    for(int i=0;i<s.length();i++ ){
        if(s[i]==target[j]){
            j++;
        }
        if(target.size()==j){
         break;
        }
        }
         if(j==target.size()){
           cout <<"YES"<<endl;
        }
         else{
              cout <<"NO"<<endl;
        }

        }

//n - maX Subsequence String

#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
   int size=1;
   char c=s[0];
    for(int i=0;i<n;i++ ){
        if(s[i]!=c){
            size++;
            c=s[i];
        }
    }

           cout <<size<<endl;
        }


        //sort
   #include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[26];
    int i,j;

    for(i=0;i<26;i++){
        array[i]=0;
    }

    for(i=0;i<n;i++){
       char ch;
       cin>>ch;
       array[ch-'a']++;
    }
     for(i=0;i<26;i++){
        char ch=i+'a';
        while(array[i]>0){
            cout<<ch;
            array[i]--;
        }

    }
}
//P - Count Words
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int count =0;

    for(int i=0;i<s.size();i++){
       if (!isalpha(s[i]) && isalpha(s[i+1])){
        count ++;

       }
        else {
            continue;
        }
        }
     cout<<count<< endl;
    }

//function add
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int add(int a,int b){
   return a+b;

}

int main()
{
    int m,n;
    cin>>m>>n;
   int sum = add(m,n);
    cout<<sum;
}


// print function

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int p(int n){
   for (int i=1;i<=n;i++){
        if (i==n){
            cout<<i;

        }
        else{
               cout << i<<" ";
        }





   }

}

int main()
{
    int m;
    cin>>m;
   p(m);
}

//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_odd(int a){
   return a%2!=0;
}

string is_binary(int n){
     string r="";
    while (n>0){
        r=(n%2==0 ? '0': '1') + r;
        n/=2;
    }
    return r;

  }
bool is_palindrom(string a)
{
    string rev= a;
    reverse(rev.begin(),rev.end());
    return rev==a;

}


int main(){
        int c;
        cin>>c;
        if(is_odd(c) && is_palindrom(is_binary(c))){

            cout<<"YES"<<endl;
        }

        else{
             cout<<"NO"<<endl;
        }
}

//d- prime

#include<iostream>
#include<cmath>
using namespace std;

bool prime(long long n)
{
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for( long long i=3; i<= sqrt(n); i+=2)
    {
        if(n%i==0)
            return false;

    }
}
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        long long b;
        cin>>b;
        if(prime(b ))
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }


}
//	E - Swap
#include<iostream>
#include<cmath>
using namespace std;

int swap(int a,int b){
      int temp=a;
      a=b;
      b=temp;
      cout<<a<<" "<<b<<endl;

}
int main(){
   int m,n;
   cin>>m>>n;
   swap(m,n);

}


// equation
#include<iostream>
using namespace std;

void s(int a,int arr[]){
    int min=arr[0];
     int max=arr[0];
    for(int i=1;i<a;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
    }
   cout<<min<<" "<<max<<endl;

}
int main(){
   int m;
      cin>>m;
   int array[m];

   for(int i=0;i<m;i++){
    cin>>array[i];

   s(m,array);

}


// prpint n number char
#include<iostream>
using namespace std;

void s(int a,char c){

    for(int i=1;i<=a;i++){
            if(i==a){
                cout<<c<<endl;
            }
            else{
                 cout<<c<<" ";
            }



    }

}
int main(){
   int m;
      cin>>m;
        while(m--){
            int f;
            char ch;
            cin>>f>>ch;
                 s(f,ch);


        }



}
// avg
#include<iostream>
#include<iomanip> //
using namespace std;

void s(int a,double arr[])
{
    double sum=0;
    for (int i=0; i<a; i++)
    {
        sum+=arr[i];

    }

    double avg=sum/a;

            cout <<setprecision(8)<<avg<<endl;

}
int main()
{
    int m;


    cin>>m;
    double array[m];
    for (int i=0; i<m; i++)
    {
        cin>>array[i];
    }


    s(m,array);


}



// new array
#include<iostream>
#include<iomanip> //
using namespace std;

void s(int a,int arr[],int ar[]){
        int c[2 * a];
        for(int i=0;i<a;i++){
            c[i]=ar[i];
        }
        for(int i=0;i<a;i++){
            c[i+a]=arr[i];


        }
        for(int i=0;i<2*a;i++){
            cout<<c[i]<<" ";
        }

        cout <<endl;


}

int main()
{
    int m;


    cin>>m;
    int array1[m];
    int array2[m];

    for (int i=0; i<m; i++)
    {
        cin>>array1[i];
    }
 for (int i=0; i<m; i++)
    {
        cin>>array2[i];
    }

    s(m,array1,array2);


}


//shoft zero
#include<iostream>
#include<iomanip> //
using namespace std;

void s(int a,int arr[]){
    int index=0;

        for(int i=0;i<a;i++){

           if(arr[i]!=0){
                arr[index]=arr[i];
                index++;
           }
        }
           while(index<a){
            arr[index]=0;
            index++;
           }
            for(int i=0;i<a;i++){
                    cout<<arr[i]<<" ";
                }
                    cout << endl;

}

int main()
{
    int m;


    cin>>m;

    int array2[m];

    for (int i=0; i<m; i++)
    {
        cin>>array2[i];
    }


    s(m,array2);


}


//N - Shift Zero
#include<iostream>

using namespace std;

int array[500][500];

void s(int n,int r,int c){
   for(int i=0;i<n;i++){
        int temp = array[r][i];
          array[r][i]=array[c][i];
          array[c][i]=temp;
           }

           for(int i=0;i<n;i++){
        int temp=array[i][r];
          array[i][r]=array[i][c];
          array[i][c]=temp;
           }

}


int main()
{
    int m;
    cin>>m;
    //int array[m][m];
    int r,c;
    cin>>r>>c;
     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin >> array[i][j];
            }
     }

    r--;
    c--;

    s(m,r,c);
     for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                    cout<<array[i][j]<<" ";
            }
            cout<<endl;

}
}


//sum
#include<iostream>
using namespace std;
int main(){
int n,a,b;
cin>>n>>a>>b;
int tsum=0;
   for(int i=1;i<=n;i++){
        int dsum=0;
        int num=i;

        while(num>0){
            dsum+=num%10;
            num/=10;
        }

            if(dsum>=a && dsum<=b){
                tsum+=i;
            }
           }
           cout << tsum<<endl;
            return 0;
}


#include<iostream>
using namespace std;
int main(){
int n,a,b;
cin>>n;
int tsum=0;
while(n--){
    int a;
    int sum;
    cin >> a;
    if(a>0){
    sum=a%10;
    a/=10;
    cout<<sum<<" "<<sum;
    }

}
}

//7
//OutputCopy
//1 2 3 PUM
//5 6 7 PUM
//9 10 11 PUM
//13 14 15 PUM
//17 18 19 PUM
//21 22 23 PUM
//25 26 27 PUM
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int num=1;
    while(n--)
    {
        for(int i=1;i<=3; i++)
        {
                cout<<num<<" ";
                num++;
            }

                cout<<"PUM"<<endl;
                num++;
            }


        }


//OutputCopy
//****
//***
//**
////*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;


    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
                cout<<"*";

            }
             cout<<endl;
        }


        }



        4
//OutputCopy
//   *
//  ***
// *****
//*******
//*******
// *****
//  ***
//   *
//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
                cout<<" ";
        }
            for(int k=1; k<=(2*i)-1; k++)
            {
            cout<<"*";
            }
            cout<<endl;
        }


        for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
                cout<<" ";
        }
            for(int k=1; k<=(2*i)-1; k++)
            {
            cout<<"*";
            }
            cout<<endl;
        }


        }



#include<iostream>
using namespace std;
int main()
{
    int a,b;


    while(true){
    cin>>a>>b;
    int mine=min(a,b);
    int maxe=max(a,b);
    int sum=0;
    if(a<=0 || b<=0){
        break;
    }


        for(int i=mine;i<=maxe;i++){
                sum+=i;
            cout<<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;



}
}


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a==0){
                cout<<'0'<<endl;
                continue;

        }
        while(a>0){
            int b=a%10;
            cout <<b;
            a/=10;

        if(a>0){
            cout<<" ";
        }
    }


        cout<<endl;
    }
}




