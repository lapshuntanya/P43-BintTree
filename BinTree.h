#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T info;
    Node* left;
    Node* right;

    Node(T value) { info = value; left = right = nullptr; }
    void showNode() {
        cout << "INFO: " << info << endl;
        cout << "\t Left: " << left << " Right: " << right << endl;
    }
};

template <typename U>
class BinTree {
    Node<U>* root; //Вказівник на перший вузол у дереві
public:
    BinTree() { root = nullptr; }
    ~BinTree() {}

    void insert(U value) {
        //1 - Створюємо вузол
        Node<U>* el = new Node<U>(value);

        //2.1 - Якщо це перший вузол
        if (root == nullptr) {
            root = el;
        }else {
            //2.2 - Вже є вузли = Знаходимо місце для вставки нового вузла
            Node<U>* p = root;
            Node<U>* pPrev = root;
            while (p!= nullptr) {
                pPrev = p;
                /*if ( value < p->info)
                    p = p->left;
                else
                    p = p->right;*/
                p = value < p->info ? p->left:p->right;
            }
            //2.3 - Привʼязуємо новій вузол до знайденного місця
             if (value < pPrev->info)
                 pPrev->left = el;
            else
                pPrev->right = el;
        }
    }

    Node<U>* search(U value) {
        //Повернути адресу вузла зі значенням value
        //Якщо value немає в дереві, то повернути nullptr
    }

    //Повний обхід дерева
    void showTree() {
        if (root == nullptr)
            cout << "Дерево контейнерів порожнє!" << endl;
        else {
            // . . .
        }
    }

};