#include <iostream>
struct Link
{
    int value;
    Link* next = nullptr;
};

void release(Link** phead)
{
    Link* head = *phead;
    if (head!=0)
    {
        std::cout <<"aba" <<std::endl;
        head = head->next;
        release(&head);
        delete head;
        *phead = 0;
    }
}

int main()
{
    Link n1;
    Link n2;
    Link n3;
    Link n4;
    n3.next = &n4;
    n2.next = &n3;
    n1.next = &n2;
    std::cout << sizeof(n1) << std::endl;
    Link* temp = &n1;
    release(&temp);
    std::cout << sizeof(n1) << std::endl;
    return 0;
}