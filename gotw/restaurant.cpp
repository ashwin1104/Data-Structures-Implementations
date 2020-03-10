#include "restaurant.h"


Restaurant::Restaurant() {
    name_ = "Restaurant";
    max_counter_space_ = 10;
    order_count_ = 0;
    is_open_ = true;
}


Restaurant::Restaurant(std::string n, int max) {
    name_ = n;
    max_counter_space_ = max;
    order_count_ = 0;
    is_open_ = true;
}


void Restaurant::open() {
    is_open_ = true;
}


void Restaurant::close() {
    is_open_ = false;
}


bool Restaurant::placeOrder(std::string n, std::string f) {
    // New orders go last
    std::cout << order_count_ << std::endl;
    if (order_count_ == max_counter_space_) {
      std::cout << max_counter_space_ << std::endl;
      return false;
    }
    if (!isOpen()) {
      return false;
    }
    Order* new_order = new Order(n, f);
    if (order_count_==0) {
      orders_front_ = new_order;
      orders_end_ = new_order;
    }
    else {
      orders_end_->setNextOrder(new_order);
      orders_end_ = new_order;
    }
    order_count_++;
    return true;
}


bool Restaurant::pickUpOrder() {
  if (order_count_ > 0) {
      Order *curr_front = orders_front_;
      if (curr_front->isComplete()) {
          orders_front_ = orders_front_->getNextOrder();
          order_count_--;
          delete curr_front;
          return true;
      }
  }
    return false;
}


bool Restaurant::completeOrder() {
    // Return true if order is ready for a customer, else false
    Order *incomplete_order = orders_front_;
    // return 0;
    while (incomplete_order != NULL && incomplete_order->isComplete()) {
        incomplete_order = incomplete_order->getNextOrder();
    }

    if (incomplete_order != NULL) {
        return incomplete_order->completeOrder();
    } else {
        return false;
    }
}


void Restaurant::displayMenu() {
    std::cout << "The special of the day is: Poutine, eh!" << std::endl;
}


void Restaurant::printOrders() {
    Order *currOrder = orders_front_;
    for (int i = 0; i < order_count_; i++) {
        std::cout << "\nOrder #" << i << " : ";
        currOrder->printOrder();
        currOrder = currOrder->getNextOrder();
    }

    std::cout << "\n--Total number of orders: " << order_count_ << std::endl;
}


bool Restaurant::isOpen() {
    return is_open_;
}

// Getters

int Restaurant::getMaxCounterSpace() {
    return max_counter_space_;
}


int Restaurant::getOrderCount() {
    return order_count_;
}


std::string Restaurant::getName() {
    return name_;
}


Restaurant::~Restaurant() {
  Order* temp = orders_front_;
  while (temp != NULL && temp != orders_end_) {
    Order* next = temp->getNextOrder();
    delete temp;
    temp = next;
  }
  delete temp;
}
