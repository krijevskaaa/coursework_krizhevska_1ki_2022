#ifndef COURSEANN_ZOO_H
#define COURSEANN_ZOO_H


class Zoo
{
private:
    int capacity;
public:
    Shelf();

    int AddAnimal(const string& date);
    int GetCapacity() const {return capacity;}
    int getAmountMoney() const {return amountMoney;}

    //Revenue of products sold.
    void sumPrice(int gain) {amountMoney += gain;}

    void setCapacityIncrease(int gain) {capacity += gain;}
    void setCapacityReduce(int gain) {capacity -= gain;}

    void loseShelfLifeProductFood(const string& date);
    void printProductFood();
    void sortProductPriceAscending();
    void sortProductPriceDescending();
    void addProductFood(const ProductFood* product, int quantity);
    void dateComparison(const string& ProduceDate, const string& ShelfLife);

    const ProductFood* buyProduct(const string& name);
    const ProductFood* buyAllProduct();
    const ProductFood* checkIntegrity(const string& name);
};


#endif //COURSEANN_ZOO_H
