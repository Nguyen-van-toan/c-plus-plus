#include <iostream>

using namespace std;
// struct data
//     {
//         char name;
//         int age;
//     };
// typedef struct data* sinh_vien;
struct Node{
    
    int data;
    Node *next;
};
typedef struct Node* node;

node make_node(int x){
    node tmp = new Node();
    tmp ->data = x;
    tmp ->next = NULL;
    return tmp;
}

bool empty(node a){
    return a  == NULL;

}
int size(node a){
    int count = 0;
    while (a!= NULL)
    {
        ++ count;
        a= a->next;
    }
    return count;
}
void insert_first(node &a, int x){
    node tmp = make_node(x);
    if (a==NULL)
    {
        a= tmp;

    }else if (a != NULL)
    {
        tmp->next = a;
        a= tmp;
    
    }
    
    

}

void insert_last(node &a, int x){
    node tmp = make_node(x);
    if (a==NULL){
        a = tmp;

    }else {
        node p = a;
    
        do
        {
            p = p->next;
            if (a==NULL)
            {
                p->next = tmp;
                break;
            }
            
        }while (a!= NULL);
         
    }
}
            
void insert_midle(node a, int x, int pos){
    int n = size(a);
    if (pos <= 0 || pos > n+1)
    {
        cout << "vi tri chen khong hop le! ";
    }else if (n==1)
    {
        insert_first(a,x);
        return;
    }else if (n== pos + 1)
    {
        insert_last(a,x);
        return;
    }
    node p= a;
    for (int i = 0; i < pos-1; i++)
    {
        p = p->next;

    }
    node tmp = make_node(x);
    tmp->next = p->next;
    p->next = tmp;

}


int main(int argc, char const *argv[])
{
    node head = NULL;

    cout << sizeof(Node)<< endl;
    return 0;
}

