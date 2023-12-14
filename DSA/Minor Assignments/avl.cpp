#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
    Node(int val) : data(val), left(nullptr), right(nullptr), height(1) {}
};

class AvlTree {
private:
    Node* root;

    int h(Node* node) {
        return (node == nullptr) ? 0 : node->height;
    }

    int bf(Node* node) {
        return (node == nullptr) ? 0 : h(node->left) - h(node->right);
    }

    Node* rr(Node* y) {
        Node* x = y->left, *T2 = x->right;
        x->right = y;
        y->left = T2;
        y->height = 1 + max(h(y->left), h(y->right));
        x->height = 1 + max(h(x->left), h(x->right));
        return x;
    }

    Node* lr(Node* x) {
        Node* y = x->right, *T2 = y->left;
        y->left = x;
        x->right = T2;
        x->height = 1 + max(h(x->left), h(x->right));
        y->height = 1 + max(h(y->left), h(y->right));
        return y;
    }

    Node* i(Node* node, int data) {
        if (node == nullptr) return new Node(data);
        if (data < node->data) node->left = i(node->left, data);
        else if (data > node->data) node->right = i(node->right, data);
        else return node;

        node->height = 1 + max(h(node->left), h(node->right));
        int balance = bf(node);

        if (balance > 1 && data < node->left->data) return rr(node);
        if (balance < -1 && data > node->right->data) return lr(node);
        if (balance > 1 && data > node->left->data) {
            node->left = lr(node->left);
            return rr(node);
        }
        if (balance < -1 && data < node->right->data) {
            node->right = rr(node->right);
            return lr(node);
        }

        return node;
    }

    Node* fn(Node* node) {
        if (node == nullptr) return nullptr;
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* d(Node* root, int data) {
        if (root == nullptr) return root;
        if (data < root->data) root->left = d(root->left, data);
        else if (data > root->data) root->right = d(root->right, data);
        else {
            if (root->left == nullptr || root->right == nullptr) {
                Node* temp = (root->left) ? root->left : root->right;
                if (temp == nullptr) {
                    temp = root;
                    root = nullptr;
                } else *root = *temp;
                delete temp;
            } else {
                Node* temp = fn(root->right);
                root->data = temp->data;
                root->right = d(root->right, temp->data);
            }

            if (root == nullptr) return root;
            root->height = 1 + max(h(root->left), h(root->right));
            int balance = bf(root);

            if (balance > 1 && bf(root->left) >= 0) return rr(root);
            if (balance > 1 && bf(root->left) < 0) {
                root->left = lr(root->left);
                return rr(root);
            }
            if (balance < -1 && bf(root->right) <= 0) return lr(root);
            if (balance < -1 && bf(root->right) > 0) {
                root->right = rr(root->right);
                return lr(root);
            }
        }
        return root;
    }

    Node* s(Node* node, int data) {
        if (node == nullptr || node->data == data) return node;
        if (data < node->data) return s(node->left, data);
        return s(node->right, data);
    }

    void io(Node* node) {
        if (node == nullptr) return;
        io(node->left);
        cout << node->data << " ";
        io(node->right);
    }

    void p(Node* node, string i, bool l) {
        if (node != nullptr) {
            cout << i;
            if (l) {
                cout << "Right ";
                i += "   ";
            } else {
                cout << "Left ";
                i += "|  ";
            }
            cout << node->data << endl;
            p(node->left, i, false);
            p(node->right, i, true);
        
    }
    }

public:
    AvlTree() : root(nullptr) {}

    void ins(int data) {
        root = i(root, data);
    }

    void del(int data) {
        root = d(root, data);
    }

    int mi() {
        Node* minNode = fn(root);
        return (minNode == nullptr) ? INT_MIN : minNode->data;
    }

    int ma() {
        Node* maxNode = fn(root);
        return (maxNode == nullptr) ? INT_MAX : maxNode->data;
    }

    Node* p(int data) {
        Node* node = s(root, data);
        if (node == nullptr) return nullptr;
        if (node->left != nullptr) {
            return fn(node->left);
        } else {
            Node* predecessor = nullptr;
            Node* current = root;
            while (current != nullptr) {
                if (data > current->data) {
                    predecessor = current;
                    current = current->right;
                } else if (data < current->data) {
                    current = current->left;
                } else break;
            }
            return predecessor;
        }
    }

    Node* sc(int data) {
        Node* node = s(root, data);
        if (node == nullptr) return nullptr;
        if (node->right != nullptr) {
            return fn(node->right);
        } else {
            Node* successor = nullptr;
            Node* current = root;
            while (current != nullptr) {
                if (data < current->data) {
                    successor = current;
                    current = current->left;
                } else if (data > current->data) {
                    current = current->right;
                } else break;
            }
            return successor;
        }
    }

    void io() {
        io(root);
        cout << endl;
    }

    void pr() {
        p(root, "", true);
    }

    bool s(int data) {
        return (s(root, data) != nullptr);
    }
};

int main() {
    AvlTree tree;
    int choice, value;

    do {
        cout << "Enter 1. Insert 2. Delete 3. Min 4. Max 5. Predecessor 6. Successor 7. InOrder 8. Print 9. Search 10. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:{
                cout << "Enter value"<<endl;
                cin >> value;
                tree.ins(value);
                break;
            }
            case 2:{
                cout << "Enter value"<<endl;
                cin >> value;
                tree.del(value);
                break;
            }
            case 3:{
                cout << "Minimum value is " << tree.mi() << endl;
                break;
            }
            case 4:{
                cout << "Maximum value is " << tree.ma() << endl;
                break;
            }
            case 5:{
                cout << "Enter value"<<endl;
                cin >> value;
                Node* pred = tree.p(value);
                if (pred != nullptr) {
                    cout << "Predecessor of is " << pred->data << endl;
                } else {
                    cout << "No predecessor found"<< endl;
                }
                break;
            }
            case 6:{
                cout << "Enter a value"<<endl;
                cin >> value;
                Node* succ = tree.sc(value);
                if (succ != nullptr) {
                    cout << "Successor of is " << succ->data << endl;
                } else {
                    cout << "No successor found" << endl;
                }
                break;
            }
            case 7:{
                tree.io();
                break;
            }
            case 8:{
                tree.pr();
                break;
            }
            case 9:{
                cout << "Enter value"<<endl;;
                cin >> value;
                if (tree.s(value)) {
                    cout << value << " is in the tree." << endl;
                } else {
                    cout << value << " is not in the tree." << endl;
                }
                break;
            }
            case 10:{
                cout << "Exit" << endl;
                break;
            }
            default:{
                cout << "Invalid choice" << endl;
                break;
            }
        }
    } while (choice != 10);

    return 0;
}