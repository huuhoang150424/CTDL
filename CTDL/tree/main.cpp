#include "tree.h"

int main() {
    // Tạo một cây nhị phân
    tree<int> bst;

    // Thêm các giá trị vào cây
    bst.addNode(50);
    bst.addNode(30);
    bst.addNode(70);
    bst.addNode(20);
    bst.addNode(40);
    bst.addNode(60);
    bst.addNode(80);

    // In cây
    std::cout << "In-order traversal: ";
    bst.printTree();
    std::cout << std::endl;

    return 0;
}