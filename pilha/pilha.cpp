#include <iostream>
using namespace std;

typedef char ItemType;

const int MAX_ITEMS = 100;

class Stack
{
public:
    Stack();  // Construtor
    ~Stack(); // Destrutor
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();

private:
    int length;
    ItemType *structure;
};

Stack::Stack()
{
    length = 0;
    structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack()
{
    delete[] structure;
}

bool Stack::isEmpty() const
{
    return (length == 0);
}
bool Stack::isFull() const
{
    return (length == MAX_ITEMS);
}
void Stack::push(ItemType item)
{
    if (!isFull())
    {
        structure[length] = item;
        ++length;
    }
    else
    {
        throw "Stack is already full!";
    }
}

ItemType Stack::pop()
{
    if (!isEmpty())
    {
        ItemType aux = structure[length - 1];
        --length;
        return aux;
    }
    else
    {
        throw "Stack is empty!";
    }
}

void Stack::print() const
{
    cout << "Pilha = ";
    for (char i = 0; i < length; ++i)
    {
        cout << structure[i];
    }
}

int main()
{
    ItemType character;
    Stack stack;
    ItemType stackItem;

    cout << "Adicione uma String." << endl;
    cin.get(character);

    while (character != '\n')
    {
        stack.push(character);
        cin.get(character);
    };

    while (!stack.isEmpty())
    {
        stackItem = stack.pop();
        cout << stackItem;
    }

    return 0;
}