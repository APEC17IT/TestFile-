#include <iostream>
#include <stdio.h>
using namespace std;

void changetoCeaser(int Encyreption_Key , string Encyreption_String){
    string MainLetter[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    int Index[26] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    string UnEncyreption[Encyreption_String.length()] ;
    string NewEncyreption[Encyreption_String.length()] ;
    for(int i=0 ; i<Encyreption_String.length() ; i++){
       UnEncyreption[i] = Encyreption_String.substr(i , 1);

    }
    int pos_key = 0;
    for(int i=0 ; i<Encyreption_String.length() ; i++){
        for(int j=0 ; j<26 ; j++){
            if(UnEncyreption[i] == " "){
                 NewEncyreption[i] = " ";
            }
            else if(UnEncyreption[i] == "?"){
                 NewEncyreption[i] = "?";
            }
            else if(UnEncyreption[i] == "!"){
                 NewEncyreption[i] = "!";
            }
            else{
               if(UnEncyreption[i] == MainLetter[j]){
                    if( (j+ Encyreption_Key) < 26){
                        pos_key = j+ Encyreption_Key;
                        NewEncyreption[i] = MainLetter[pos_key];
                    }
                     else{
                        pos_key = (j+ Encyreption_Key)-26;
                        NewEncyreption[i] = MainLetter[pos_key];
                     }
               }
            }
        }
    }
    cout<< "Ceaser Cipher is : ";
    for(int i=0 ; i<Encyreption_String.length() ; i++){
        cout << NewEncyreption[i];
    }

}

int main()
{
    string x = "how are you?";
    changetoCeaser(13 , x);
    return 0;
}

