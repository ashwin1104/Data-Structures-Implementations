#pragma once

#include <stdlib.h>
#include <iostream>
#include <string>

#include "order.h"


class Restaurant {
    public:
        Restaurant();
        Restaurant(std::string n, int max);
        virtual ~Restaurant();

        void open();
        void close();
        virtual bool placeOrder(std::string n, std::string f); // Add an order
        virtual bool pickUpOrder(); // Wait for customer to pick up order; remove order from list
        virtual bool completeOrder();
        virtual void displayMenu(); // Print out menu
        virtual void printOrders();

        bool isOpen();
        int getMaxCounterSpace();
        int getOrderCount();
        std::string getName();

        Order* orders_front_; // List of orders - TODO: Add public accessor to front of the list (encapsulate)
        Order* orders_end_; // List of orders

    private:
        bool is_open_;
        int max_counter_space_; // Limits number of orders that can be picked up
        int order_count_;
        std::string name_;
};
