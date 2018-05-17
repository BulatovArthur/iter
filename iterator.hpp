#include <node.hpp>

namespace BSTree {

    template<typename T>
    class iterator;

    template <typename T>
    class pre_iterator;

    template <typename T>
    class post_iterator;

    template<typename T>
    class iterator {

        using pointer = T *;
        using reference = T &;
        using value_type = T;

    public:
        //iterator(const iterator &);

        virtual ~iterator();

        iterator& operator=(const iterator &);

        virtual iterator& operator++();

        virtual reference operator*() const;

        virtual iterator operator++(int);

        value_type operator*() const;

        pointer operator->() const;

        reference operator*() const;

        iterator operator++(int);

        //template <typename T1>
        //friend bool operator==(const iterator<T1>& iter1, const iterator<T1>& iter2);
        
        template <typename T2>
        friend bool operator!=(const iterator<T2>& iter1, const iterator<T2>& iter2) {
            if(iter1.ptr->data != it2.ptr->data)
                return true;
            return false;
        }

        //friend void swap(iterator& lhs, iterator& rhs);

    private:
        Node* ptr;
    };

    template <typename T>
    class pre_iterator : iterator<T> {
    protected:
        pre_iterator();
        pre_iterator(Node* ptr);
    // ...
    };

    template <typename T>
    class post_iterator : iterator<T> {
    protected:
        post_iterator();
        post_iterator(Node* ptr);
    // ...
    };
    
    template <typename T>
    auto pre_iterator<T>::operator=(pre_iterator& iter)->pre_iterator<T>& {
        this->ptr=iter.ptr;
        return *this;
    }

    template <typename T>
    auto post_iterator<T>::operator=(post_iterator& iter)->post_iterator<T>& {
        this->ptr=iter.ptr;
        return *this;
    }

    template <typename T>
    pre_iterator<T>::pre_iterator() : ptr {nullptr} {}

    template <typename T>
    post_iterator<T>::post_iterator(Node<T>* ptr) {
        this->ptr = ptr;
    }

    template <typename T>
    post_iterator<T>::post_iterator() : ptr {nullptr} {}

    template <typename T>
    pre_iterator<T>::pre_iterator(Node<T>* ptr) {
        this->ptr = ptr;
    }
    
    template <typename T>
    auto pre_iterator<T>::operator*() ->T & {
        return ptr->data;
    }

    template <typename T>
    auto post_iterator<T>::operator*() ->T & {
        return ptr->data;
    }
}
