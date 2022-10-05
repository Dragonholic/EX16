#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 100


typedef struct {
    char data[N];
    int top;

}StackType;


void init(StackType *S){
    S->top = -1;
}

int isEmpty(StackType *S){
    return S->top == -1;
}

int isFull(StackType *S){
    return S->top == N - 1;
}



void push(StackType *S, char c){
    if(isFull(S))
        printf("Full.\n");
    else{
        S->top++;


        S->data[S->top] = c;
    }
}


char pop(StackType *S){
    if(isEmpty(S)){
        printf("Empty. \n");
        return -1;
    }
    char c = S ->data[S->top];
    S->top--;
    return c;
}

char peek(StackType *S){
    if(isEmpty(S)){
        printf("Empty. \n");
        return -1;
    }
    return S ->data[S->top];

}

int main() {
    StackType C,K;
    init(&C);
    init(&K);
    char str[N];


    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n; ++i) {

        if(str[i]>=65 && str[i]<=90 ){
            str[i] += 32;
            push(&C,str[i]);
        }
        else if(str[i] >=97 && str[i] <=122 )
            push(&C, str[i]);

    }



    printf("Hello, World!\n");
    return 0;
}
