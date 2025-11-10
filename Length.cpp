#include "Length.h"

// outside of the class 
int lengthDistance(Length a, Length b) {
    return abs(a.getInches() - b.getInches());
}
