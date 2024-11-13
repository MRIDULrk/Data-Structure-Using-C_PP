#include <iostream>
using namespace std;


void pyramidPattern(int n){


        for(int i=0;i<n;i++){

            for(int j=1;j<=(n-1-i);j++){

                cout<<" ";

            }

            for(int j=1;j<=i+1;j++){

                cout<<j;

            }


            for(int j=i;j>0;j--){


                    cout<<j;


            }

            cout<< endl;


        }


}



void reversePattern(int n){

     for( int i=1;i<=n;i++){

            for( int j=n;j>=i;j--){


                cout<<j;
                cout<<" ";


           }

           cout<<endl;


        }


}


int main(){


    int n;
    cout<<"Enter Value: ";

    cin >> n;


        cout<<"Pyramid Pattern ";
        cout<<endl;

        pyramidPattern(n);

        cout<<endl;

        cout<<"Reverse Pattern ";
        cout<<endl;

        reversePattern(n);





}
