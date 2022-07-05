#include<iostream>
#include <conio.h>
using namespace std;
#include<stdio.h>
#include<string.h>
 
int main(){
    char msg[] = "CORVITSAHIWAL";
    char key[] = "FARHAN";
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
 
    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];
 
    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
    //encryption
    for(i = 0; i < msgLen; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    encryptedMsg[i] = '\0';
 
    //decryption
    for(i = 0; i < msgLen; ++i)
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';
 
    decryptedMsg[i] = '\0';
 
    cout<<"Original Message: Plain text :  "<< msg;
    cout<<"\nKey: required key :"<< key;
    cout<<"\nNew Generated Key: "<< newKey;
    cout<<"\nEncrypted Message:key is : "<< encryptedMsg;
    cout<<"\nDecrypted Message: Again plain text: "<< decryptedMsg;
 
return 0;
}
