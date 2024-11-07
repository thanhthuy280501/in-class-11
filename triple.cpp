//****************************************************************************
// This is the implementation file for class Triple.
//****************************************************************************

//*****************************
// Default Constructor
//*****************************
Triple::Triple() {
    array = new int[3];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
}

//*****************************
// Three-parameter Constructor
//*****************************
Triple::Triple(int first, int second, int third) {
    array = new int[3];
    array[0] = first;
    array[1] = second;
    array[2] = third;
}

//*****************************
// This sets the first value.
//*****************************
void Triple::setFirst(int newValue) {
    array[0] = newValue;
}

//*****************************
// This sets the second value.
//*****************************
void Triple::setSecond(int newValue) {
    array[1] = newValue;
}

//*****************************
// This sets the third value.
//*****************************
void Triple::setThird(int newValue) {
    array[2] = newValue;
}

//*******************************
// This returns the first value.
//*******************************
int Triple::getFirst( ) const {
    return array[0];
}

//*******************************
// This returns the second value.
//*******************************
int Triple::getSecond( ) const {
    return array[1];
}

//*******************************
// This returns the third value.
//*******************************
int Triple::getThird( ) const {
    return array[2];
}

