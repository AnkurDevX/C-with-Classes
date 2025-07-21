#include<iostream>
using namespace std;

// Class to find maximum and minimum in a dynamically allocated array
class MaxMin
{
    private:
        int *pArray = NULL; // Pointer to dynamically allocated array
        int length = 0;     // Length of the array
        int i;              // Loop variable

        // Displays the array elements
        void display()
        {
            cout << "Array Display" << endl;
            for(i = 0; i < length; i++)
            {
                cout << pArray[i] << " ";
            }
            cout << endl;
        }

        // Finds and returns the maximum element in the array
        int MaxFind()
        {
            int max = pArray[0];
            for(i = 0; i < length; i++)
            {
                if(max < pArray[i])
                {
                    max = pArray[i];
                }
            }
            return max;
        }

        // Finds and returns the minimum element in the array
        int MinFind()
        {
            int min = pArray[0];
            for(i = 0; i < length; i++)
            {
                if(min > pArray[i])
                {
                    min = pArray[i];
                }
            }
            return min;
        }

    public:
        // Constructor: takes input for array length and elements
        MaxMin()
        {
            int i = 0;
            cout << "enter length of array" << endl;
            cin >> length;
            pArray = new int[length];
            cout << "enter element" << endl;
            for(i = 0; i < length; i++)
            {
                cin >> pArray[i];
            }
        }

        // Displays array, maximum and minimum values
        void MinMaxDisplay()
        {
            int Max = 0;
            int Min = 0;
            display();
            Max = MaxFind();
            Min = MinFind();
            cout << "Maximum = " << Max << endl;
            cout << "Minimum = " << Min << endl;
        }
};

int main()
{
    MaxMin MxMn;           // Create object, input array
    MxMn.MinMaxDisplay();  // Display array, max and min
}