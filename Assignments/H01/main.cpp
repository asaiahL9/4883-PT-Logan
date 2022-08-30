///////////////////////////////////////////////////////////////////////////////
//                   
// Author:           Asaiah Logan
// Email:            asaiahlogan@hotmail.com
// Label:            H01
// Title:            Basic Project Organization
// Course:           CMPS 2143
// Semester:         Fall 2020
//
// Description:
//       This program implements a list data structure that links together nodes of 
//       integers. It can print the entire list or just the last node in the list.
//
// Files: 
//       main.cpp
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int A[100];   // array of 100 integers

struct Node   // custom data type creating node of list
{
    int x;
    Node *next;
    Node()
    {
        x = -1;
        next = NULL;
    }
    Node(int n)
    {
        x = n;
        next = NULL;
    }
};

/**
 * List
 * 
 * Description:
 *      Description of your class and what it does
 * 
 * Public Methods:
 *                List()
 *      void      Push(int val)
 *      void      Insert(int val)
 *      void      PrintTail()
 *      string    Print()
 *      List      operator+(const List &Rhs)
 *      int       operator[](int index)
 *      friend    ostream &operator<<(ostream &os, List L)
 * Private Methods:
 *      Node *Head
 *      Node *Tail
 *      int Size
 * 
 * Usage: 
 *      List L;         // create list
 *      
 *      Insert(int);    // add integer to front of list
 *      Push(int);      // add integer to end of list
 *
 *      PrintTail();    // print last node of list
 *
 *      // or //

 *      Print();        // print entire list
 */

class List
{
  private:
    Node *Head; // pointer to track front of list
    Node *Tail; // pointer to track end of list
    int Size;   // declaring size of list

  public:
    List()
    {
        Head = Tail = NULL;
        Size = 0;
    }

    /**
     * Public: Push
     * 
     * Description:
     *      add node to end of list
     * 
     * Params:
     *      int   - integer value
     * 
     * Returns:
     *      NONE
     */
    void Push(int val)
    {
        // allocate new memory and init node
        Node *Temp = new Node(val);

        if (!Head && !Tail)
        {
            Head = Tail = Temp;
        }
        else
        {
            Tail->next = Temp;
            Tail = Temp;
        }
        Size++;
    }
    
    /**
     * Public: Insert
     * 
     * Description:
     *      insert node at the front of the list
     * 
     * Params:
     *      int   - integer value
     * 
     * Returns:
     *      NONE
     */
    void Insert(int val)
    {
        // allocate new memory and init node
        Node *Temp = new Node(val);

        // figure out where it goes in the list

        Temp->next = Head;
        Head = Temp;
        if (!Tail)
        {
            Tail = Head;
        }
        Size++;
    }

    /**
     * Public: PrintTail
     * 
     * Description:
     *      print the node at the end of the list
     * 
     * Params:
     *      NONE
     * 
     * Returns:
     *      NONE
     */
    void PrintTail()
    {
        cout << Tail->x << endl;
    }

    /**
     * Public: Print
     * 
     * Description:
     *      print the list
     * 
     * Params:
     *      NONE
     * 
     * Returns:
     *      string    list
     */
    string Print()
    {
        Node *Temp = Head;
        string list;

        while (Temp != NULL)
        {
            list += to_string(Temp->x) + "->";
            Temp = Temp->next;
        }

        return list;
    }

    // not implemented 
    int Pop()
    {
        Size--;
        return 0; //
    }

    /**
     * Public: operator+
     * 
     * Description:
     *      Create a new list that will contain both lists when done
     * 
     * Params:
     *      List    Rhs
     * 
     * Returns:
     *      List    - pointer to a new list
     */    
    List operator+(const List &Rhs)
    {
        // Create a new list that will contain both when done
        List NewList;

        // Get a reference to beginning of local list
        Node *Temp = Head;

        // Loop through local list and Push values onto new list
        while (Temp != NULL)
        {
            NewList.Push(Temp->x);
            Temp = Temp->next;
        }

        // Get a reference to head of Rhs
        Temp = Rhs.Head;

        // Same as above, loop and push
        while (Temp != NULL)
        {
            NewList.Push(Temp->x);
            Temp = Temp->next;
        }

        // Return new concatenated version of lists
        return NewList;
    }

    
    /**
     * Public: operator
     * 
     * Description:
     *       Implementation of [] operator.  This function returns an
     *       int value as if the list were an array.
     * 
     * Params:
     *      int   index
     * 
     * Returns:
     *      int   temp
     */    
    int operator[](int index)
    {
        Node *Temp = Head;

        if (index >= Size)
        {
            cout << "Index out of bounds, exiting";
            exit(0);
        }
        else
        {

            for (int i = 0; i < index; i++)
            {
                Temp = Temp->next;
            }
            return Temp->x;
        }
    }

    friend ostream &operator<<(ostream &os, List L)
    {
        os << L.Print();
        return os;
    }
};

int main(int argc, char **argv)
{
    List L1;  // declaring first instance of list
    List L2;  // declaring second list

    for (int i = 0; i < 25; i++)  // loop to add nodes to end of the first list
    {                             // with integers 1-24
        L1.Push(i);
    }

    for (int i = 50; i < 100; i++) // loop to add nodes to end of second list
    {                              // with integers 50-99
        L2.Push(i);
    }

    //cout << L1 << endl;
    L1.PrintTail();   // print last node of first list
    L2.PrintTail();   // prinf last node of second list

    List L3 = L1 + L2;  // create third list containing the sum of the integers from
                        // list 1 and list 2
  
    cout << L3 << endl; // print list 3

    cout << L3[5] << endl;
    return 0;
}