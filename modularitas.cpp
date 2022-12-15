#include <iostream>
using namespace std;

void buatArray(int content[]);
void printOdd(int odd[]);
void happyFace();
void sadFace();

int main()
{
    int arr[10];

    buatArray(arr);
    printOdd(arr);
    happyFace();
    sadFace();

    return 0;
}

void buatArray(int content[])
{

    for (int i = 0; i < 10; i++)
    {
        content[i] = i + 1;
    }

    cout << "Array[10] = {";
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            cout << content[i];
        }
        else
        {
            cout << "," << content[i];
        }
    }
    cout << "}" << endl;
}

void printOdd(int odd[])
{
    cout << "Bilangan Ganjil pada Array[10] = {";
    for (int i = 0; i < 10; i++)
    {
        if (odd[i] % 2 != 0)
        {
            if (i == 0)
            {
                cout << odd[i];
            }
            else
            {
                cout << "," << odd[i];
            }
        }
    }
    cout << "}" << endl;
}

void happyFace()
{
    char input;
    cout << "Input ')' for smile. Input 'q' or 'Q' for quit." << endl;
    while (true)
    {
        cout << "Input: ";
        cin >> input;
        if (input == ')')
        {
            cout << ":)"
                 << endl;
        }
        else if (input == 'q' || input == 'Q')
        {
            cout << "Program exit..." << endl;
            break;
        }
        else
        {
            cout << "Input invalid.";
            cin >> input;
        }
    }
}

void sadFace()
{
    char input;
    cout << "Input '(' for sad. Input 'q' or 'Q' for quit." << endl;
    while (true)
    {
        cout << "Input: ";
        cin >> input;
        if (input == '(')
        {
            cout << ":("
                 << endl;
        }
        else if (input == 'q' || input == 'Q')
        {
            cout << "Program exit..." << endl;
            break;
        }
        else
        {
            cout << "Input invalid.";
            cin >> input;
        }
    }
}