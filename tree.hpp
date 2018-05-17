#include <hode.hpp>
#include <iterator.hpp>

using namespace std;

namespace BSTree {

    template <typename T>
    class Tree {
    public:
        using iterator = pre_order::iterator;
        using reverse_iterator = post_order::iterator;

        Tree(initializer_list<T>);

        auto push_back(const T&) -> void;

        auto begin() -> iterator;
        auto end() -> iterator;

        auto rbegin() -> reverse_iterator;
        auto rend() -> reverse_iterator;

    private:
        Node<T>* root;
    };
}
