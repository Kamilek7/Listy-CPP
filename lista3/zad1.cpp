#include <iostream>
struct Link
{
    int value;
    Link* next = nullptr;
};
size_t size(const Link* head)
{
    int count = 1;
    Link* temp = head->next;
    while (temp != 0)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
size_t sum(const Link* head)
{
    int count = head->value;
    Link* temp = head->next;
    while (temp != 0)
    {
        count+= temp->value;
        temp = temp->next;
    }
    return count;
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
    n1.value = 1;
    n2.value = 2;
    n3.value = 3;
    n4.value = 4;
    std::cout << size(&n1) << std::endl << sum(&n1);
    return 0;
}