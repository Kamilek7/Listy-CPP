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
    Link* temp = &n1;
    release(&temp);
    std::cout << (temp == nullptr) << std::endl;
    return 0;
}