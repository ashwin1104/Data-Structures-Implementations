#include "mcronald.h"

int main() {
    /** If you fixed all your bugs, main should compile and run successfully.
     *  But there might be some other bugs that we won't test for you,
     *  so play around with the code! :D
     **/
    std::string hamburger = "Hamburger";
    std::string fries = "Fries";
    std::string salad = "Kale-icious Greens";
    std::string gordan_special = "Gordan-Hamsey Burger";
    std::string peas_special = "Peas and Thank You Burger";
    std::string heartichoke_special = "I Heartichoke You Burger";
    std::string shallot_special = "Hit Me With Your Best Shallot Burger";

    McRonald *mcronald = new McRonald("McRonald", 6);
    mcronald->open();
    mcronald->displayMenu();

    mcronald->placeOrder("Linda", hamburger);
    mcronald->placeOrder("Bob", gordan_special);
    mcronald->placeDeluxeOrder("Louise", fries);
    mcronald->completeOrder(); // 2
    mcronald->printOrders();
    mcronald->close();
    mcronald->printOrders();
    mcronald->placeDeluxeOrder("Louise", fries);



    mcronald->placeOrder("Gene", hamburger);
    mcronald->placeDeluxeOrder("Louise", fries);

    mcronald->printOrders();
    mcronald->placeDeluxeOrder("Louise", fries);


    mcronald->open();
    mcronald->placeDeluxeOrder("Louise", fries);

    mcronald->printOrders();
    //
    mcronald->placeDeluxeOrder("Louise", fries);

    mcronald->placeOrder("Tina", salad);
    mcronald->placeDeluxeOrder("Teddy", heartichoke_special);
    mcronald->placeDeluxeOrder("Gayle", shallot_special);
    mcronald->placeOrder("Mort", salad);
    mcronald->printOrders();
    mcronald->completeOrder(); // 5
    mcronald->close();

    mcronald->placeOrder("Gene", hamburger);
    mcronald->open();
    mcronald->printOrders();

    mcronald->placeOrder("Jimmy Jr", fries);
    mcronald->placeOrder("Jimmy Jr", fries);

    mcronald->printOrders();

    mcronald->placeOrder("Andy and Ollie", "2x"+hamburger); // nope


    mcronald->close();
    mcronald->printOrders();
    //
    //
    mcronald->completeOrder();
    mcronald->completeOrder();
    mcronald->placeOrder("Glitter", peas_special);
    mcronald->printOrders();
    mcronald->completeOrder();
    mcronald->completeOrder();
    mcronald->placeOrder("Glitter", peas_special);
    mcronald->printOrders();
    mcronald->completeOrder();
    mcronald->completeOrder();
    mcronald->placeOrder("Glitter", peas_special);
    mcronald->printOrders();
    mcronald->completeOrder();
    mcronald->completeOrder();
    mcronald->placeOrder("Glitter", peas_special);
    mcronald->printOrders();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();
    mcronald->pickUpOrder();

    delete mcronald;

    return 0;
}
