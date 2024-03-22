#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H

#include <vector>
#include <string>
#include <stdlib.h> 

class BagOfHolding{
    private:
        std::vector<std::string> bag;

    public:
        BagOfHolding();

        void addItem(std::string newItem);
        std::string removeItem();
        std::string removeItem(std::string oldItem);
};

#endif