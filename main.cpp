#include <iostream>

using namespace std;

int main()
{
    cout << "Veuillez entrer votre noms et prenoms" <<endl;
    string firstname;
    cin >> firstname;
    char arr[firstname.length() + 1];
    strcpy(arr, firstname.c_str());
    int taille(firstname.length() + 1);
    cout << firstname.length() << endl;
    cout << firstname << endl;
    for(int i=0;i<taille;i++)
    {
        cout<<firstname[i]<<" ";
    }
    cout<<endl;
    for(int i=firstname.length() -2;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -3]<<endl;
    for(int i=firstname.length() -3;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -4]<<endl;
    for(int i=firstname.length() -4;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -5]<<endl;
    for(int i=firstname.length() -5;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -6]<<endl;
    for(int i=firstname.length() -6;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -7]<<endl;
    for(int i=firstname.length() -7;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -8]<<endl;
    for(int i=firstname.length() -8;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -9]<<endl;
    for(int i=firstname.length() -9;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -10]<<endl;
    for(int i=firstname.length() -10;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -11]<<endl;
    for(int i=firstname.length() -11;i>=0;i--){
        cout<<"  ";
    }
    cout<<firstname[firstname.length() -11]<<endl;
    for(int i=firstname.length() -11;i<taille;i++){
        cout<<firstname[i]<<" ";
    }
    return 0;
}
