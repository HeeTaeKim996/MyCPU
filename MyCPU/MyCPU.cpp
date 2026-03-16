

#include <iostream>
#include "pch.h"
#include <fstream>

#include <filesystem>

int main()
{
    
#if 0// Temp Assigning char[(2^32)*8] Memory 
    for (int i = 0; i < 64; i++)
    {
        char* TempAssign = new char[536870912];
    }
#endif
    

    vector<uint8> Ram = vector<uint8>(100, 0);
    BByte b1(Ram, 10);
    
    printf("B1 : %d(%s)\n", Ram[10], b1.GetBits().c_str());
    


    b1[0] = '1';
    b1[2] = '1';
    b1.Confirm();

    BByte b2(Ram, 10);

    printf("B2 : %d(%s)\n", Ram[10], b2.GetBits().c_str());

    


    string path = "Source";
    if (filesystem::exists(path) == false)
    {
        filesystem::create_directories(path);
        
    }

    
    



    fstream rf("Source/Test.txt", ios::in);
    if (rf.is_open())
    {
        string line;
        while (getline(rf, line))
        {
            if (line == "")
            {
                printf("empty\n");
            }
            else
            {
                printf("%s\n", line.c_str());
            }
            
        }

        rf.close();
    }
    else
    {
        printf("Cant fild txt\n");
    }




    fstream wf("Source/Test2.txt", ios::out);
    if (wf.is_open())
    {
        wf << "Hello Harry" << endl;
        wf << "" << endl;
        wf << "Hi Bori" << endl;
    }

    //fstream wf("Test2.txt", ios::out); 
    // if ios::out | ios::app  -> Retain old file. and revise(Add)
}

