#include <bits/stdc++.h>
using namespace std;

void PrintBinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}


void LeftRightShiftingMultiplyDivide() //efficient way to Multiply & Divide
{
         
    /*     left shift == n*(2^i) --> (n >> i)     */
    /*     right shift == n/(2^i) --> (n<<i)    */

    int n=5,i=4;
    cout << (n<<i) << endl;  /* 5*(2^4)==5*16==80  */
    cout << (80>>4) << "\n\n\n"; // 80/(2^4)==80/16==5
}


void OddEvenBitManipulation()
{
    for(int i=1;i<=9;i++)
    {
        PrintBinary(i);
        bool fact = i & 1;
        if(fact)// true basically
        {
            cout << "ODD\n";           
        }
        else
        cout << "EVEN\n";
    }
    cout << "\n\n\n";
}

void CharUp2Low()
{
    char Conv = char(65);
    int Conv2=int('A');
    cout << Conv << endl;//Direct Conversion of ASCII(int -> char)
    cout << Conv2 << endl; //D.C. of ASCII (char -> int)

    cout << char('A' | ' ') << endl;//Upper 2 lower Via Bit Manipulation
    cout << char('d' & '_') << endl;//lower 2 Upper 
}



int main()
{
    PrintBinary(9);

    //Check whether i-th bit set or not-
    int i = 3;
    int a=9;
    if((a & (1<<i)!=0))
    cout << "SET BIT\n";
    else
    cout << "UNSET\n";

    //make i-th bit set(convert into 1 if i-th bit is 0)
    i=2;
    PrintBinary(a | (1<<i));// OR operation যোগ করে দেয় বাইনারি


    //make i-th bit unset(convert into 0)
    i=3;
    PrintBinary(a & (~(1<<i)));/*প্রথমে ১ লেফট শিফট করে নতুন একটা বিট জেনারেট করে নতুন বিটের 
    i তম পজিশনে 1 আছে যেহেতু,তাই বিট ইনভার্স(~)করে নিই,এখন নতুন বিটের i-th বিটে 0 থাকবে,
    এখন নতুন বিট কে  আগের বিটের সাথে এন্ড করলে আই তম বিট শূন্য হবে।*/

    //bit Toggle
    i=2;
    PrintBinary(a | (1 << i));//i পজিশনে থাকা বিট ইনভার্স বা টগল হয়ে যাবে
    PrintBinary(a | (1 << 8));// ৯ম বিট টগল হবে


    LeftRightShiftingMultiplyDivide();

    OddEvenBitManipulation();

    CharUp2Low();



}
