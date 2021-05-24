#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>

using namespace std;


namespace ariel{

template<class T> class BinaryTree
{

struct Node {
		T m_value;
		Node* m_right;
        Node* m_left;


		Node(const T& v)
			: m_value(v) {
		}

	};

    private:
    Node* root;
   // Iterator<T>* itr;

    public:
    BinaryTree<T>(){

    }
 
   ~BinaryTree(){

   }


    BinaryTree& add_root(const T& val){
        Node t = Node(val) ;
        root = &t;
        return *this;
    }
   BinaryTree& add_left (const T& val, const T& new_val){
       return *this;
    }
    BinaryTree& add_right (const T& val, const T& new_val){
        return *this;
    }


    void PrintInorder(Node& ptr);
    void PrintPreOrder(Node& ptr);
    void PrintPostOrder(Node& ptr);

   
   


  
   friend ostream &operator << (std::ostream& os, const BinaryTree<T>& b){

       return os;

   }


  
public:

class iterator {

	  private:
		Node* pointer_to_current_node;

	    public:

		iterator(Node* ptr = nullptr)
			: pointer_to_current_node(ptr) {
		}

        T& operator*() const {
			//return *pointer_to_current_node;
			return pointer_to_current_node->m_value;
		}

		T* operator->() const {
			return &(pointer_to_current_node->m_value);
		}

		// ++i;
		iterator& operator++() {
			//++pointer_to_current_node;
			//pointer_to_current_node = pointer_to_current_node->m_next;
			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const iterator operator++(int) {
			iterator tmp= *this;
			//pointer_to_current_node= pointer_to_current_node->m_next;
			return tmp;
		}

		bool operator==(const iterator& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}

		bool operator!=(const iterator& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
		}
	};

    iterator begin() {
		// return &(m_first->m_value); 
		//return iterator{root};
        return nullptr;
	}
	
	iterator end() {
		// return nullptr; 
		return nullptr;
	}

         //in order
    iterator begin_inorder(){
        //return iterator{root};
        return nullptr;
    }
    iterator end_inorder(){
       //return iterator{root};
        return nullptr;
    }

       //in order
    iterator begin_postorder(){
        //return iterator{root};
        return nullptr;
    }
    iterator end_postorder(){
       //return iterator{root};
        return nullptr;
    }

     //pre order
    iterator begin_preorder(){
        //return iterator{root};
        return nullptr;
    }
    iterator end_preorder(){
        return nullptr;
    }
};

}