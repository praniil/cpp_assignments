#include <iostream>
using namespace std;
class DynamicArray
{
private:
    int *array;
    int capacity;
    int size;

    void displayMenu()
    {
        std ::cout << "\nMenu:" << endl;
        std ::cout << "1. Print Elements" << endl;
        std ::cout << "2. Add Element" << endl;
        std ::cout << "3. Delete Element" << endl;
        std ::cout << "4. Exit" << endl;
    }

    void increaseCapacity()
    {
        capacity = capacity * 2;
        int *newArray = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
    }

    void shrink()
    {
        capacity = capacity / 2;
        int *newArray = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        std::cout << "array shrinked";
    }

    int choose()
    {
        int choice;
        std ::cout << "enter the number you want to choose: ";
        cin >> choice;
        return choice;
    }

public:
    DynamicArray()
    {
        capacity = 2;
        size = 0;
        array = new int[capacity];
    }

    ~DynamicArray()
    {
        delete[] array;
    }

    void print_element()
    {
        if (size == 0)
        {
            std ::cout << "NO ELEMENTS";
        }
        else
        {
            for (int i = 0; i < size; i++)
            {

                std ::cout << array[i] << endl;
                std ::cout << capacity << endl;
                std ::cout << size << endl;
            }
        }
    }

    void add_elements(int elements)
    {

        if (size == capacity)
        {
            increaseCapacity();
        }
        else
        {
            array[size] = elements;
            size++;
        }
    }

    void delete_elements(int number)
    {

        for (int i = 0; i < size; i++)
        {
            if (array[i] == number)
            {
                for (int j = i; j < size - 1; j++)
                {
                    array[j] = array[j + 1];
                }
                size--;
                if (size <= capacity / 2)
                {
                    shrink();
                }
                        }
            else
            {
                std ::cout << "Not there";
            }
        }
    }

    void accessPrivateDisplayMenu()
    {
        displayMenu();
    }
    int accessPrivatechoice()
    {

        return choose();
    }
};

int main()
{
    DynamicArray array;

    while (true)
    {
        array.accessPrivateDisplayMenu();
        int choice = array.accessPrivatechoice();

        switch (choice)
        {
        case 1:
            array.print_element();
            break;
        case 2:
            int element;
            std ::cout << "Enter ELements: ";
            cin >> element;
            array.add_elements(element);
            break;
        case 3:
            int number;
            std ::cout << "enter the number";
            cin >> number;
            array.delete_elements(number);
            break;
        case 4:
            return 0;
            break;

        default:
            std ::cout << "Invalid choice";
        }
    }
}
