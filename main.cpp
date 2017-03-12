/* Convert this program to C++
 * -> change to C++ IO
 * -> change to one line comment
 * -> replace symbolic constants
 * -> use a vector instead of an array
 * -> inline short functions
 */

#include <cstdint>	// Fixed width integer types class
#include <iostream>	//standardlib
#include <vector>	//Vektorfeld für kleinen platzbedarf

using namespace std;	//Namespace -> Klasse die gebraucht wird

const int numbers = 40; //numbers = 40 void sum(uint16_t *result, const vector<uint8_t>&);

inline void sum(int *result, const vector<int> &newData);

int main(void) {

    int accumulator = 0;
    vector<int> data;

    for (int idx = 0 ; idx < numbers ; idx++)
    {
        data.push_back(idx);    // pushback(0) geht auf erste Adresse im Array data[idx] //alloziert speicherplatz automatisch
    }
    sum(&accumulator, data);

    cout << "The sum is: " << accumulator << endl;

    return 0;
}

inline void sum(int *result, const vector<int> &newData)
{
    for (unsigned int index = 0; index < newData.size(); index++)
    {
        *result += newData.at(index);    //newData=data; .at greifft auf array ein
    }
}

