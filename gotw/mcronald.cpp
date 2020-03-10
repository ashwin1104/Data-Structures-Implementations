// #include <iostream>

#include "mcronald.h"
#include "restaurant.h"
#include "order.h"


McRonald::McRonald():Restaurant("Happy Place", 10) {
}


McRonald::McRonald(std::string n, int m):Restaurant(n, m) {
}


void McRonald::displayMenu() {
    std::cout << "Welcome to McRonald!" << std::endl;
    std::cout << "---------------------" << std:: endl;
    std::cout << "On today's menu: " << std::endl;
    std::cout << "-Hamburger" << std::endl;
    std::cout << "-Fries" << std::endl;
    std::cout << "-Kale-icious Greens" << std::endl;
    std::cout << "---------------------" << std:: endl;
    std::cout << "The special of the day is: Gordan-Hamsey Burger" << std::endl;
    std::cout << " -- It takes a bite out of you too!" << std::endl;
    std::cout << "We've also got the Peas and Thank You Burger, I Heartichoke You Burger,\nHit Me With Your Best Shallot Burger! - courtesy of Bob's Burgers" << std::endl;
}


bool McRonald::placeOrder(std::string n, std::string f) {
  if (!isOpen()) {
    return false;
  }
    return Restaurant::placeOrder(n, f);
}


bool McRonald::placeDeluxeOrder(std::string n, std::string f) {
    Order* new_order = new Order(n, f);
    if (!isOpen()) {
      return false;
    }
    if (deluxe_order_count_==0) {
      deluxe_orders_front_ = new_order;
      deluxe_orders_end_= new_order;
    }
    else {
        deluxe_orders_end_->setNextOrder(new_order);
      deluxe_orders_end_ = new_order;
    }
    deluxe_order_count_++;
    return true;
}

bool McRonald::pickUpOrder() {
    if (deluxe_order_count_ > 0 && deluxe_orders_front_->isComplete()) {
        Order *curr_front = deluxe_orders_front_;
        if (curr_front->isComplete()) {
            deluxe_orders_front_ = deluxe_orders_front_->getNextOrder();
            deluxe_order_count_--;
            delete curr_front;
            return true;
        }
        return false;
    } else {
        return Restaurant::pickUpOrder();
    }
}


void McRonald::printOrders() {
    Restaurant::printOrders();
    Order *currOrder = deluxe_orders_front_;
    for (int i = 0; i < deluxe_order_count_; i++) {
        std::cout << "\nOrder #" << i << " : ";
        currOrder->printOrder();
        currOrder = currOrder->getNextOrder();
    }

    std::cout << "\n--Total number of deluxe orders: " << deluxe_order_count_ << std::endl;
}


bool McRonald::completeOrder() {
// Returns true if a new order was completed and is ready for a customer, false if there were no orders to complete
    Order* incomplete_order = deluxe_orders_front_;

    while (incomplete_order != NULL && incomplete_order->isComplete()) {
        incomplete_order = incomplete_order->getNextOrder();
    }

    if (incomplete_order == NULL) {
        return Restaurant::completeOrder();
    }

    return incomplete_order->completeOrder();
}


int McRonald::getDeluxeOrderCount() {
	return deluxe_order_count_;
}


McRonald::~McRonald() {
    Order* curr_order = deluxe_orders_front_;
    while (curr_order) {
        Order* next_order = curr_order->getNextOrder();
        delete curr_order;
        curr_order = next_order;
    }
}
