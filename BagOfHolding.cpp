#include "BagOfHolding.h"

BagOfHolding::BagOfHolding(){
    std::vector<std::string> bag = {};
}

void BagOfHolding::addItem(std::string newItem){
    this->bag.push_back(newItem);
}

std::string BagOfHolding::removeItem(){
    int oldIt = rand() % bag.size();
    item = bag.at(oldIt);
    bag.erase(oldIt);
    return item;
}

std::string BagOfHolding::removeItem(std::string oldItem){
    for(auto it=bag.begin(); it=bag.end(); ++it){
        if(bag.at(it) == oldItem){
            bag.erase(it);
            return oldItem;
        }
        return;
    }
}