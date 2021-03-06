int main() {
  
    using BSTree::Tree;
    Tree<int> tree = {5, 3, 4, 2, 7, 9, 6, 8};

    auto it = tree.begin();
    auto end = tree.end();

    for (; it != end; ++it ) {
        std::cout << *it << ' ';
    }
  
    std::cout << std::endl;
  
    auto rit = tree.rbegin();
    auto rend = tree.rend();
    for(; rit != rend; ++rit) {
      std::cout << *it << ' ';
    }
    std::cout << std::endl;
}
