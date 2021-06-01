#include <iostream>
#include <vector>

using namespace std; 

class ACM
{
    private:
    int N; // sum of entries of all block of the matrix, number of columns
    string subject; 
    string object; 
    string action;
    string **matrix; 

    public:
    ACM(int N)
    {

    for(int i = 0; i < N; i++)
    {
        matrix[i] = new string [3];
    }

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                matrix[i][j] = " "; 
            }
        } 
    }  

    void update(string **a)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                matrix[i][j] = a[i][j]; 
            }
        } 
    }
//To check whether there is a link between subject to action, action to object, object to subject
    bool pair(ACM &acm, string a, string b)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(acm.matrix[i][j] == a)
                {
                    if(j == 0)
                    {
                        if(acm.matrix[i][j + 1] == b || acm.matrix[i][j] == b)
                        {
                            return true;
                        } 
                    }
                    else if(j == 1)
                    {
                        if(acm.matrix[i][j - 1] == b || acm.matrix[i][j+1] == b)
                        {
                            return true;
                        } 
                    }
                    else if(j == 2)
                    {
                        if(acm.matrix[i][j-1] == b || acm.matrix[i][j-2] == b)
                        {
                            return true; 
                        }
                    }
                    else
                    {
                        return false; 
                    }
                }
            }
        }        
    }

    bool Determine(string sub, string act, string obj)
    {
        ACM acm(N); 
        return (pair(acm, sub, act) ==  pair(acm, act, obj) == pair(acm, obj, sub)); 
    }
};

int main()
{
}