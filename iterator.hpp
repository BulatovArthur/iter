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
        iterator(const iterator &);

        ~iterator();

        iterator& operator=(const iterator &);

        virtual iterator& operator++();

        virtual reference operator*() const;

        virtual iterator operator++(int);

        value_type operator*() const;

        pointer operator->() const;

        reference operator*() const;

        iterator operator++(int);

        friend bool operator==(const iterator&, const iterator&);

        friend bool operator!=(const iterator&, const iterator&);

        friend void swap(iterator& lhs, iterator& rhs);

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
}
