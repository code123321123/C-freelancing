#include <iostream>
using std::cout;

// Part - A
// m is the size of array strings1 and n is size of array strings2
void duplicates_def(char strings1[][20], char strings2[][20], char[][20] res_string, int m, int n)
{
    int res_ind = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (strcmp(strings1[i], strings2[j]) == 0)
            {
                res_string[res_ind++] = strings1[i];
            }
        }
    }
}

// Part - B
m is the size of array strings1 and n is size of array strings2
string* duplicates_pbc(string strings1[], string strings1[], int m, int n) {
    string strings_res[];
    int res_ind = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (strings1[i] == strings2[j])
            {
                res_string[res_ind++] = strings1[i];
            }
        }
    }
    return strings_res;
}

void main() {
    char strings1[100][20] = {"8dhg", "dgf4", "9ddh"};
    char strings2[100][20] = {"5*@1", "9ddh"};

    duplicates_def(strings1, strings2, res_string, 3, 2);

    string[3] s1 = {"8dhg", "dgf4", "9ddh"};
    string[3] s2 = {"5*@1", "9ddh"};

    duplicates_pbc(s1, s2, 3, 2);

    retrun 0;
}


// Part - C
/**
 * In the first part of this question in the function duplicates_def, we pass two input string array and one empty array for the
 * output, Which fill the array. We also pass the size of both array as parameter.
 * 
 * In the second function duplicates_pbc we used c++ string and pass array of string and return array of string too. We also
 * pass the size of array as parameter in second function too.
 * 
 * Output:
 * 
 *  "9ddh"  // by first function
 *  "9ddh"  // by second function
 * 
 **/