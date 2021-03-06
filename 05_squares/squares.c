#include <stdio.h>
#include <stdlib.h>
int maximum(int, int);
/*
 * Determines if coord is in range between
 * offset (INCLUSIVE) and offset + size (EXCLUSIVE)
 */

int isInRange(int coord, int offset, int size) 
{
  if (coord >= offset && coord<=(offset+size))
    {
      return 1;// if coord is in range, return 1
    }
  else  // else, return 0
    {
    return 0;
}
}

/*
 * Determines if coord is at border of offset or
 * offset + size
 */
int isAtBorder(int coord, int offset, int size) 
{
if (coord == offset || coord == (offset+size))// if coord is equal to offest or offset + size
    {
      return 1; // return 1, else return 0
    }
  else 
    {
         return 0;
  }
}

void squares(int size1, int x_offset, int y_offset, int size2) 
{
  int w = maximum(size1,(x_offset + size2));//compute the max of size1 and (x_offset + size2).  Call this w

  int h = maximum(size1,(y_offset + size2)); //compute the max of size1 and (y_offset + size2).o  Call this h

  for(int y=0; y<h;y++)//count from 0 to h. Call the number you count with y
    {
      for(int x=0; x<w;x++)//count from 0 to w. Call the number you count with x 
        {
	  if(((x_offset<=x && x<x_offset +size2) && (y==y_offset || y==y_offset + size2 - 1)) || ((y_offset<=y && y<y_offset +size2) && ((x==x_offset || x==x_offset +size2 - 1))))//check if  EITHER
      //    ((x is between x_offset  and x_offset +size2) AND
      //     y is equal to either y_offset OR y_offset + size2 - 1 )
      //  OR
      //    ((y is between y_offset and y_offset + size2) AND
      //     x is equal to either x_offset OR x_offset + size2
	    {
	      printf("*"); // if so, print a *
		}
          else if  (( x < size1 && ((y == 0) || (y ==(size1-1)))) || ( y < size1 && ((x == 0) || (x ==(size1-1)))))//if not,
      // check if EITHER
      //    x is less than size1 AND (y is either 0 or size1-1)
      // OR
      //    y is less than size1 AND (x is either 0 or size1-1)
            {
		printf("#");//if so, print a #
		}

          else{ 
		printf(" ");//else print a space
		}
        }
      printf("\n"); //print a newline
    } 
}

int maximum(int g, int h)
{
  if( g > h) 
    {
        return g;
  }
  else
    {
      return h;
    }
}
