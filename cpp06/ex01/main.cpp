#include "Serializer.hpp"

int main()
{
    Data originalData;

    uintptr_t serializedValue = Serializer::serialize(&originalData);

    Data* deserializedData = Serializer::deserialize(serializedValue);

    if (deserializedData == &originalData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
}