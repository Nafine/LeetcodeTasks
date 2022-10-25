#include <string>

string defangIPaddr(string address) {

    for (size_t i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            address.insert(i, "[");
            address.insert(i + 2, "]");
            i += 2;

        }
    }

    return address;
}