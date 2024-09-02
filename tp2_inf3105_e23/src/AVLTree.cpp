#include "../include/AVLTree.hpp"

/*

// Insérer un nouveau noeud dans l'arbre AVL
Node* AVLTree::insert(Node* node, int value) {
    // Cas de base : l'arbre est vide, créer un nouveau noeud
    if (node == nullptr)
        return new Node(value);

    // Insérer le noeud dans le sous-arbre gauche ou droit
    if (value < node->data)
        node->left = insert(node->left, value);
    else if (value > node->data)
        node->right = insert(node->right, value);
    else
        return node; // Valeur déjà présente, pas d'insertion

    // Mettre à jour la hauteur du noeud
    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));

    // Vérifier l'équilibre de l'arbre
    int balance = getBalance(node);

    // Cas de déséquilibre gauche-gauche
    if (balance > 1 && value < node->left->data)
        return rotateRight(node);

    // Cas de déséquilibre droite-droite
    if (balance < -1 && value > node->right->data)
        return rotateLeft(node);

    // Cas de déséquilibre gauche-droite
    if (balance > 1 && value > node->left->data) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    // Cas de déséquilibre droite-gauche
    if (balance < -1 && value < node->right->data) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

// Supprimer un noeud de l'arbre AVL
Node* AVLTree::remove(Node* node, int value) {
    // Cas de base : l'arbre est vide
    if (node == nullptr)
        return node;

    // Supprimer le noeud dans le sous-arbre gauche ou droit
    if (value < node->data)
        node->left = remove(node->left, value);
    else if (value > node->data)
        node->right = remove(node->right, value);
    else {
        // Noeud trouvé, le supprimer
        if (node->left == nullptr || node->right == nullptr) {
            Node* temp = node->left ? node->left : node->right;

            // Cas de base : le noeud n'a pas de fils
            if (temp == nullptr) {
                temp = node;
                node = nullptr;
            } else { // Cas : le noeud a un fils
                *node = *temp; // Copier le contenu du fils non vide
            }

            delete temp;
        } else {
            // Noeud avec deux fils : trouver le successeur inorder
            Node* temp = findMin(node->right);

            // Copier les données du successeur inorder dans le noeud courant
            node->data = temp->data;

            // Supprimer le successeur inorder
            node->right = remove(node->right, temp->data);
        }
    }

    // Cas de base : l'arbre avait un seul noeud
    if (node == nullptr)
        return node;

    // Mettre à jour la hauteur du noeud
    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));

    // Vérifier l'équilibre de l'arbre
    int balance = getBalance(node);

    // Cas de déséquilibre gauche-gauche
    if (balance > 1 && getBalance(node->left) >= 0)
        return rotateRight(node);

    // Cas de déséquilibre droite-droite
    if (balance < -1 && getBalance(node->right) <= 0)
        return rotateLeft(node);

    // Cas de déséquilibre gauche-droite
    if (balance > 1 && getBalance(node->left) < 0) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    // Cas de déséquilibre droite-gauche
    if (balance < -1 && getBalance(node->right) > 0) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

// Obtenir la hauteur d'un noeud de l'arbre
int AVLTree::getHeight(Node* node) {
    if (node == nullptr)
        return 0;

    return node->height;
}

// Obtenir le facteur d'équilibre d'un noeud de l'arbre
int AVLTree::getBalance(Node* node) {
    if (node == nullptr)
        return 0;

    return getHeight(node->left) - getHeight(node->right);
}

// Effectuer une rotation vers la droite autour du noeud donné
Node* AVLTree::rotateRight(Node* node) {
    Node* leftChild = node->left;
    Node* rightGrandchild = leftChild->right;

    // Rotation
    leftChild->right = node;
    node->left = rightGrandchild;

    // Mettre à jour les hauteurs
    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));
    leftChild->height = 1 + std::max(getHeight(leftChild->left), getHeight(leftChild->right));

    return leftChild;
}

// Effectuer une rotation vers la gauche autour du noeud donné
Node* AVLTree::rotateLeft(Node* node) {
    Node* rightChild = node->right;
    Node* leftGrandchild = rightChild->left;

    // Rotation
    rightChild->left = node;
    node->right = leftGrandchild;

    // Mettre à jour les hauteurs
    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));
    rightChild->height = 1 + std::max(getHeight(rightChild->left), getHeight(rightChild->right));

    return rightChild;
}

// Trouver le noeud avec la valeur minimale dans un sous-arbre
Node* AVLTree::findMin(Node* node) {
    Node* current = node;

    while (current->left != nullptr)
        current = current->left;

    return current;
}

// Insérer un nouveau noeud dans l'arbre AVL
void AVLTree::insert(int value) {
    root = insert(root, value);
}

// Supprimer un noeud de l'arbre AVL
void AVLTree::remove(int value) {
    root = remove(root, value);
}

// Parcourir l'arbre en ordre croissant (inorder traversal)
void AVLTree::printInorder() {
    printInorder(root);
    std::cout << std::endl;
}

// Parcourir l'arbre en ordre croissant (inorder traversal)
void AVLTree::printInorder(Node* node) {
    if (node == nullptr)
        return;

    printInorder(node->left);
    std::cout << node->data << " ";
    printInorder(node->right);
}

*/