#include <iostream>
#include <stdexcept>

using namespace std;

const char MAX_ITEMS = 100;

class Queue
{
public:
    Queue()
    {
        front = 0;
        back = 0;
        structure = new char[MAX_ITEMS];
    };
    ~Queue()
    {
        delete[] structure;
    };
    bool isFull() const
    {
        return (back - front == MAX_ITEMS);
    };
    bool isEmpty() const
    {
        return (front == back);
    };
    void print() const
    {
        for (int i = front; i < back; ++i)
        {
            cout << structure[i % MAX_ITEMS];
        }
        cout << endl;
    };
    void enqueue(char item)
    {
        if (!isFull())
        {
            structure[back % MAX_ITEMS] = item;
            ++back;
        }
        else
        {
            throw overflow_error("Fila está cheia");
        }
    };
    char dequeue()
    {
        if (!isEmpty())
        {
            ++front;
            return structure[(front - 1) % MAX_ITEMS];
        }
        else
        {
            throw underflow_error("Fila está vazia");
        }
    };

private:
    int front;
    int back;
    char *structure;
};

int main()
{
    char character;
    Queue queue;
    char queueChar;
    cout << "Adicione uma string." << endl;
    cin.get(character);
    while (character != '\n' and !queue.isFull())
    {
        queue.enqueue(character);
        cin.get(character);
    }

    while (!queue.isEmpty())
    {
        queueChar = queue.dequeue();
        cout << queueChar;
    }
    cout << endl;

    return 0;
}