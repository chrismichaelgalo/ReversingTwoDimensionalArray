#include <iostream>

using namespace std;

int main() 
{
	int twoDimensionArr[3][5];
	int rowMax = 3;
	int colMax = 5;
	int value = 0;
	int temp = 0;
	int lastRowIndex = rowMax - 1;
	int lastColIndex = colMax - 1;
	int counts = 0;
	int loopCount = 0;
	
	// Populate array with values 1 to 15
	for(int row = 0; row < rowMax; row++)
	{
	    for(int col = 0; col < colMax; col++)
	    {
	        twoDimensionArr[row][col] = ++value;
	    }
	}
	
	//Display contents of array
	cout << "Original Contents of Array: " << endl;
	for(int row = 0; row < rowMax; row++)
	{
	    for(int col = 0; col < colMax; col++)
	    {
	        cout<< twoDimensionArr[row][col] << endl;
	        ++counts;
	    }
	}
	
	//Reverse contents of array
	for(int row = 0; row < rowMax; row++ )
	{
	    for(int col = 0; col < colMax; col++)
	    {
	        temp = twoDimensionArr[row][col];
	        twoDimensionArr[row][col] = twoDimensionArr[lastRowIndex][lastColIndex];
	        twoDimensionArr[lastRowIndex][lastColIndex] = temp;
	        --lastColIndex;
	        ++loopCount;
	        if(loopCount == (counts / 2))
	        {
	            break;
	        }
	        
	    }
	    --lastRowIndex;
	    lastColIndex = colMax - 1;
	    if(loopCount == (counts / 2))
	    {
	        break;
	    }
	}
	
    //Display reversed contents of array
    cout << "Reversed Contents of Array: " << endl;
	for(int row = 0; row < rowMax; row++)
	{
	    for(int col = 0; col < colMax; col++)
	    {
	        cout<< twoDimensionArr[row][col] << endl;
	    }
	}
	
    return 0;
}
