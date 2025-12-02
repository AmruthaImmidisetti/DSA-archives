class ParkingSystem {
public:
    int Big = 0, Medium = 0, Small = 0;
    ParkingSystem(int big, int medium, int small) {
        Big = big;
        Medium = medium;
        Small = small;
    }

    bool addCar(int carType) {
        if (carType == 1 and Big >= 1) {
            Big -= 1;
            return true;
        } else if (carType == 2 and Medium >= 1) {
            Medium -= 1;
            return true;
        } else if (carType == 3 and Small >= 1) {
            Small -= 1;
            return true;
        } else {
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */