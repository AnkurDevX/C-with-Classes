// Check if Two Arrays Are Equal or Not
#include<iostream>
using namespace std;

// Class to handle two arrays and check their equality
class cArray
{
    private:
        int *pArray1 = NULL; // Pointer to first array
        int *pArray2 = NULL; // Pointer to second array
        int length = 0;      // Length of arrays
      
    public :
        // Constructor: Allocates arrays and takes input from user
        cArray()
        {
            int i;
            
            cout<<"enter length of array"<<endl;
            cin>>length;
            pArray1 = new int[length]; // Allocate first array
            pArray2 = new int[length]; // Allocate second array
            cout<<"enter first array element"<<endl;
            for(i=0;i<length;i++)
            {
                cin>>pArray1[i]; // Input elements for first array
            }
            cout<<"enter second array element"<<endl;
            for(i=0;i<length;i++)
            {
                cin>>pArray2[i]; // Input elements for second array
            }
        }

        // Display both arrays
        void display()
        {
            int i;
            cout<<"first array"<<endl;
            for(i=0;i<length;i++)
            {
                cout<<pArray1[i]<<" "; // Print first array
            }
            cout<<endl;
            cout<<"second array"<<endl;
            for(i=0;i<length;i++)
            {
                cout<<pArray2[i]<<" "; // Print second array
            }
            cout<<endl;
        }

        // Check if both arrays are equal (regardless of order)
        void elementCheck()
        {
            int i, j;
            int element = 0;
            int counter = 0;
            int *matched = NULL;
            matched = new int[length]; // Array to track matched elements

            for(i=0;i<length;i++)
            {
                matched[i] = false; // Initialize matched array
            }

            // For each element in first array, try to find a match in second array
            for(i=0;i<length;i++)
            {
                element = pArray1[i];
                for(j=0;j<length;j++)
                {
                    // If not already matched and elements are equal
                    if(matched[j] == 0 && element == pArray2[j])
                    {
                        counter++;         // Increment match counter
                        matched[j] = true; // Mark as matched
                        break;             // Move to next element
                    }
                }
            }

            // If all elements matched, arrays are equal
            if(counter == length)
            {
                cout<<"both array are equal"<<endl;
            }
            else
            {
                cout<<"both array are not equal"<<endl;
            }
        }
};

int main()
{
    cArray CA1;        // Create cArray object (takes input)
    CA1.display();     // Display both arrays
    CA1.elementCheck();// Check if arrays are equal
}