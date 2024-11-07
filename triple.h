//****************************************************************************
// This is the interface/header file for the class Triple
//****************************************************************************
#ifndef TRIPLE_H
#define TRIPLE_H

//********************************************************
// This class stores a triple of integers.
// This version uses an array instead of separate values.
//********************************************************
class Triple {
  public:
    Triple( );
    Triple(int first, int second, int third);

    void setFirst(int newValue);		// Set the values.
    void setSecond(int newValue);
    void setThird(int newValue);

    int getFirst( ) const;		// Get the values.
    int getSecond( ) const;
    int getThird( ) const;

  private:
    int *array;				// Store them in a small
					// dynamic array.
};

#endif
