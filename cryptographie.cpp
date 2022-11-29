#include<iostream>
#include<cstring>
#include <cctype>
using namespace std;
char incr(char c, char v){
    int asc= int(v);
    for (int i=65; i<asc; i++){
      c=c+1;
      if(int(c)==91){
          c='A';
      }


    }

    return c;
}

void uppr_string(string& s){
    int length = s.length();
    for (int i=0; i<length; i++){
        int c = s[i];
        if(islower(c)){
            s[i]=toupper(c);
        }
}
}



int main(){
    string key;
    string text;
    string result;

    cout<<"entrez le texte : "<<endl;
    cin>>text;

    cout<<"entrez la cle :"<<endl;
    cin>>key;
    int txt_lg= text.length();
    int k_lg=key.length();
   // uppr_string(text);
   // uppr_string(text);
   // cout<<text<<endl;

   result=incr(key[0], text[0]);
   int index=1;
   for(int i=1; i<txt_lg;i++){

       if(index==k_lg){
           index=0;
       }
       //cout<<index<<endl;
       if(index<k_lg){
       result=result+incr(key[index],text[i]);
       }

          index=index+1;
   }

    cout<<endl;
    cout<<"le resultat est: "<<endl;
    cout<<result<<endl;



}
