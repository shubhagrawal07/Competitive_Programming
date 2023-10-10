#include<iostream>
using namespace std;

class Stack
{
private:
    int size;
    int index;
    int *arr;
public:
    Stack(int size);
    void sPush(int data);
    void sPop();
    bool isEmpty();
    int sTop();
    ~Stack();
};

Stack::Stack(int n)
{
    size=n;
    arr = new int[size];
    index=-1;
}

Stack::~Stack()
{
    delete[] arr;
}

void Stack::sPush(int data){
    if(index==size-1){
        cerr<<"Stack Overflow!";
        return;
    }

    index++;
    arr[index]=data;

    return;
}

void Stack::sPop(){
    if(index!=-1)index--;
    else cerr<<"Stack Underflow!";
    return;
}

bool Stack::isEmpty(){
    return index==-1;
}

int Stack::sTop(){
    if(index>=0&&index<size)return arr[index];
    else{
        cerr<<"Invalid Operation";
        return -1;
    }
}

int main(){

    // Dynamically allocating stack memory;
    Stack *st = new Stack(5);
    cout<<st->isEmpty()<<endl;

    st->sPush(1);
    st->sPush(2);
    st->sPush(3);
    st->sPush(4);
    st->sPush(5);

    cout<<st->sTop()<<endl;

    st->sPop();
    cout<<st->sTop()<<endl;

    delete st;

    Stack st2(2);

    cout<<st2.isEmpty()<<endl;
    st2.sPush(10);
    cout<<st2.isEmpty()<<endl;


    return 0;
}