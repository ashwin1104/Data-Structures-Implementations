
class ListIterator : public std::iterator<std::bidirectional_iterator_tag, T> {
  private:
    ListNode* position_;

  public:
    ListIterator() : position_(NULL) { }
    ListIterator(ListNode* x) : position_(x) { }

    // Pre-Increment, ++iter
    ListIterator& operator++() {
      if (position_ != NULL) {
        position_ = position_->next;
      }
        return *this;
    }

    // Post-Increment, iter++
    ListIterator operator++(int) {
        // @TODO: graded in MP3.1
        ListNode* temp = position_;
        if (position_ != NULL) {
          position_ = position_->next;
        }
        return ListIterator(temp);
    }

    // Pre-Decrement, --iter
    ListIterator& operator--() {
      if (position_ != NULL) {
        position_ = position_->prev;
      }
        return *this;
    }

    // Post-Decrement, iter--
    ListIterator operator--(int) {
        ListNode * temp = position_;
        if (position_ != NULL) {
          position_ = position_->prev;
        }
        return ListIterator(temp);
    }

    bool operator!=(const ListIterator& rhs) {
        // @TODO: graded in MP3.1
        return (this->position_ != rhs.position_);
    }

    bool operator==(const ListIterator& rhs) {
        return (this->position_ == rhs.position_);
    }

    const T& operator*() {
        return position_->data;
    }

    const T* operator->() {
        return &(position_->data);
    }
};
