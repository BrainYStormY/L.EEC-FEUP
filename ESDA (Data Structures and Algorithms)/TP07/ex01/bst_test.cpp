#include <iostream>
#include <string>
#include <vector>
#include "bst.hpp"

using namespace std;

int main()
{
    Tree obj_tree;

    int option;
    cout << ("\n Programa Arvore binaria de string\n");
    do
    {
        cout << "\n***********************************";
        cout << "\nEntre com a opcao:";
        cout << "\n ----1: Inserir";
        cout << "\n ----2: Calcular altura";
        cout << "\n ----3: Caminhar em pre-ordem";
        cout << "\n ----4: Caminhar em pos-ordem";
        cout << "\n ----5: Remover";
        cout << "\n ----6: Sair do programa";
        cout << "\n***********************************";
        cout << "\n-> ";

        cin >> option;

        switch (option)
        {
            case 1:
            {
                vector<string> vtr{"G", "C", "A", "F", "L", "J", "V", "M", "N", "O"};

                for(string str : vtr){
                    obj_tree.insert(str);
                }

                cout << "\n Elementos inseridos com sucesso" << endl;
                
                break;
            }

            case 2:
            {
                obj_tree.getRoot();
                
                cout << "\n\n Altura da árvore: " << obj_tree.getHeight() << endl;
                
                break;
            }

            case 3:
            {
                cout << "\n\n Exibindo em pré-ordem: ";
                
                Node *root = obj_tree.getRoot();
                
                obj_tree.preOrder(root);
                
                cout << endl;

                break;
            }

            case 4:
            {
                cout << "\n\n Exibindo em pos-ordem: ";

                Node *root = obj_tree.getRoot();
                
                obj_tree.posOrder(root);
                
                cout << endl;
                
                break;
            }

            case 5:
            {
                string str = "";

                cout << "\n Informe o valor (string) -> ";

                cin >> str;

                obj_tree.remove(str);

                break;
            }
        }
    } while (option != 6);

    return 0;
}