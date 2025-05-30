#include <iostream>
using namespace std;

// sqrt pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
void sqrtPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// holo pattern
//  * * * * *
//  *       *
//  *       *
//  *       *
//  * * * * *
void holoPattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == 0 || i == n - 1 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// singleLine
// * * * * *
// * *     *
// *   *   *
// *     * *
// * * * * *
void singleLine(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1 || i == j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// pyramid
// *
// **
// ***
// ****
// *****
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// holo pyramid
//  *
//  * *
//  *   *
//  *     *
//  * * * * *
void holoPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j || i == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// reverse pyramid
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
void reversePyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// reverseHoloPyramid
//  *****
//  *  *
//  * *
//  **
//  *
void reverseHoloPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            if (j == 0 || i == 0 || j == (n - i) - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// center pyramid
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
void centerPyramid(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

// reverse center pyramid
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
void reverseCenterPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//full ceter pyramid
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
void fullCenterPyramid(int n){
    //first part
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    //second part
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//holo center pyramid
//     * 
//    * * 
//   *   * 
//  *     * 
// * * * * * 
void holoCenterPyramid(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=n-i-1;j<n;j++){
            if(j==n-i-1 || j==n-1 || i==n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// holo center down pyramid
// * * * * * 
//  *     * 
//   *   * 
//    * * 
//     * 
void holoCenterDownPyramid(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            if(j==0 || i==0 || j==n-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

//centre Diymod
//     * 
//    * * 
//   *   * 
//  *     * 
// *       * 
// *       * 
//  *     * 
//   *   * 
//    * * 
//     * 
void centerDiymod(int n){
    //first part
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                cout<<"* ";
            else 
                cout<<"  ";
        }
        cout<<endl;
    }

    //second part
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            if(j==0 || j==n-i-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

//full window pattern 1 way
// *****_*****
// ****___****
// ***_____***
// **_______**
// *_________*
// *_________*
// **_______**
// ***_____***
// ****___****
// *****_*****
void fullWindowPattern(int n){
    //first half
    for(int i=0;i<n;i++){
        //first part
        for(int j=0;j<n;j++){
            if(j<n-i){
                cout<<"*";
            }else{
                cout<<"_";
            }
        }
        cout<<"_";
        //second part
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<"_";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    //second half
    for(int i=0;i<n;i++){
        //first part
        for(int j=0;j<n;j++){
            if(j<=i) cout<<"*";
            else cout<<"_";
        }
        cout<<"_";
        //scond part
        for(int j=0;j<n-i-1;j++){
            cout<<"_";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//number mix pyramid
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
void numberMixPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j&1) cout<<"*";
            else cout<<i+1;
        }
        cout<<endl;
    }
}

//number mix half pyramid
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1
void numberMixHalf(int n){
    //first
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j&1) cout<<"*";
            else cout<<i+1;
        }
        cout<<endl;
    }
    n--;
    //second
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-(2*i+1);j++){
            if((n-j)&1) cout<<"*";
            else cout<<(n-i);
        }
        cout<<endl;
    }

}

//pattern with char
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
void patternWithChar(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)('A'+j)<<"";
        }
        char tempChar = 'A' + i - 1;
        for(int j=1;j<=i;j++){
            cout<<tempChar;
            tempChar--;
        }
        cout<<endl;
    }
}

//Numaric holo pattern
// 1
// 12
// 1 3
// 1  4
// 12345
void numaricHoloPatter(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i || i==n-1) cout<<j+1;
            else cout<<" ";
        }
        cout<<endl;
    }
}

//numaric hollow inverted half pyramid
// 12345
// 2  5
// 3 5
// 45
// 5
void numaricHollowInvertedHalfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(j==0 || i==0 || j==n-i-1)
                cout<<j+i+1;
            else 
                cout<<" ";
        }
        cout<<endl;
    }
}

//numaric pyramid
//     1
//    121
//   12321
//  1234321
// 123454321
void numaicPyramid(int n){
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        
        for(int j=1;j<=i;j++){
            cout<<i-j+1;
        }
        cout<<endl;
    }
}

//side star pattern 
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void sideStarPatten(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    n--;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//fancy pattern 
// *********1*********
// ********2*2********
// *******3*3*3*******
// ******4*4*4*4******
// *****5*5*5*5*5*****
void fancyPattern(int n){
    for(int i=0;i<n;i++){
        //first
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        //second
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        //third
        for(int j=0;j<2*i+1;j++){
            if(j&1)cout<<"*";
            else cout<<i+1;
        }
        //four pattern
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        //fifth
        for(int j=0;j<n;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

//side number mix pattern
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1
void sideNumberMixPattern(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j&1) cout<<"*";
            else cout<<start++;
        }
        cout<<endl;
    }
    start--;
    start = start - (n-1);
    for(int i=0;i<n;i++){
        int k = start;
        for(int j=0;j<(2*n)-(2*i+1);j++){
            if(j&1) cout<<"*";
            else cout<<k++;
        }
        start = start - (n-i-1);
        cout<<endl;
    } 
}

//fancy pattern third
// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *
void fancyPatternThrid(int n){
    for(int i=0;i<n;i++){
        int count = i <= n/2 ? 2*i+1 : 2*(n-i-1)+1;
        for(int j =0 ;j<count;j++){
            if(j==0 || j==count-1)
                cout<<"*";
            else if(j<=count/2)
                cout<<j;
            else 
                cout<<count-j-1;
        }
        cout<<endl;
    }
}

//floyel's triangle pattern
// 1
// 23
// 456
// 78910
void floyelTrianglePattern(int n){
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<k++;

        cout<<endl;
    }
}

//pascal trangle
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1
void pascalTrangle(int n){
    for(int i=1;i<=n;i++){
        int c = 1;
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
}

//last pattern
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
void lastPattern(int n){
    for(int i=0;i<n;i++){
        //first
        for(int j=0;j<n;j++){
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";
        }
        //second
        for(int j=0;j<n;j++){
            if(j<n-i-1)
                cout<<" ";
            else
                cout<<"*";
        }

        cout<<endl;
    }

    for(int i=0;i<n;i++){
        //third
        for(int j=0;j<n;j++){
            if(j<n-i)
                cout<<"*";
            else
                cout<<" ";
        }
        //four
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

int main()
{
    // sqrtPattern(5);
    // holoPattern(5);
    // singleLine(5);
    // pyramid(5);
    // holoPyramid(5);
    // reversePyramid(5);
    // reverseHoloPyramid(5);
    // centerPyramid(5);
    // reverseCenterPyramid(5);
    // fullCenterPyramid(5);
    // holoCenterPyramid(5);
    // holoCenterDownPyramid(5);
    // centerDiymod(5);
    // fullWindowPattern(5);
    // numberMixPyramid(5);
    // numberMixHalf(5);
    // patternWithChar(5);
    // numaricHoloPatter(5);
    // numaricHollowInvertedHalfPyramid(5);
    // numaicPyramid(5);
    // sideStarPatten(5);
    // fancyPattern(5);
    // sideNumberMixPattern(4);
    // fancyPatternThrid(7);
    // floyelTrianglePattern(4);
    // pascalTrangle(5);
    lastPattern(5);
    return 0;
}