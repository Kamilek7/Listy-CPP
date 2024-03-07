#include <iostream>
struct Link
{
    int value;
    Link* next = nullptr;
};
void reverse(Link* head)
{
    if (head->next != nullptr)
    {
        Link* tmp1 = head->next;
        Link* tmp = head;
        Link* tmp2;        
        while (tmp1 != 0)
        {
            tmp2 = tmp1->next;
            tmp1->next = tmp;
            tmp = tmp1;
            tmp1 = tmp2;
        }
    }
    head->next = nullptr;
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
    std::cout << n1.next << " " << n2.next << " " << n3.next << " " << n4.next << " " <<std::endl;
    reverse(&n1);
    std::cout << n4.next << " " << n3.next << " " << n2.next << " " << n1.next << " " <<std::endl;
    return 0;
}