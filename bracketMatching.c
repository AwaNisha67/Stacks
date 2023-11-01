//Bracket Matching
#include<stdio.h>
#include <stdbool.h>
int push(int arr[],int size,int value,int idx){
    if(idx==size-1){
        printf("Stack overflow");
    }
    idx++;
    arr[idx]=value;
    return(idx);
}
int pop(int arr[],int size,int idx){
    if(idx==-1){
        printf("Stack underflow");
    }
    idx--;
    return(idx);
}
int peek(int arr[],int size,int idx){
    if(idx==-1){
        printf("Stack is empty");
    }
    return(arr[idx]);
}
int isEmpty(int arr[],int size,int idx){
    if(idx == -1){
        return true;
    }else{
        return false;
    }
}
void main(){
    char arr[]={'(','[','{','(',')','}',']',')'};
    int idx=-1,ans,i;
    for(i=0;arr[i];i++){
        char current = arr[i];
        if(current=='(' || current == '[' || current == '{'){
            push(arr,size,current,i);
        }
        else if((current ==')' && peek(arr,size,i) =='(') || (current ==']' && peek(arr,size,i) =='[') || (current =='}' && peek(arr,size,i) =='{')){
            pop(arr,size,i);
        }
        
    }
    ans=isEmpty(arr,size,i);
    if(ans==true){
        printf("Balanced");
    }else{
        printf("UnBalanced");
    }
    
}