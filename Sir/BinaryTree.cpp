#include <iostream>
using namespace  std;
struct node
{
    int data;
    node *left;
    node *right;
};
 class BST
 {
     private:
       node *root;
       protected:
       void preoder(node *n);
         void Postoder(node *n);
         void Inoder(node *n);
       public:
        BST();
       void Inserted(int);
        void Displaypreodr();
        node * Search(int);
        void Delete(node*);
       
 };
    BST::BST()
    {
         root=NULL;
    }
  void BST::Inserted(int data)
  {
        node *n=new node ;
         node *ptr;
        n->data=data;
        n->left=NULL;
        n->right=NULL;
         if(root==NULL)
         {
             root=n;

         }
         else 
         {
              ptr=root;
               bool flag =true;
               while(flag)
               {
                   if(n->data==root->data)
                   {
                       cout<<"Duplicate value"<<endl;
                       break;
                   }
                   if(n->data<ptr->data)  //left subtree
                   {
                        if(ptr->left==NULL)
                         { ptr->left=n;
                          flag=false;
                         }
                         else
                         {
                           ptr=ptr->left;
                         }

                   }
                   else // right subtree
                   {
                        if(ptr->right==NULL)
                        {
                           ptr->right=n;
                           flag=false;

                        }
                        else
                        {
                           ptr=ptr->right;
                        }

                   }

               }

         }


       
  }
  void BST::preoder(node *ptr)
  {
   cout<<"PreOder Traversal"<<endl; 
    if(ptr)
    {
        
         
         cout<<"Data: "<<ptr->data<<" ";
         preoder(ptr->left);
         preoder(ptr->right);

    }

  }
    void BST::Postoder(node *n)
    {
      cout<<"Post oder "<<endl;
        if(n){
         
          Postoder(n->left);
          Postoder(n->left);
          cout<<"Data "<<n->data<<" ";
        }
    }
      
     void BST::Inoder(node *n)
     {
  
       if(n){
        
           Inoder(n->left);
           Inoder(n->right);
             cout<<"Data "<<n->data<<" ";
       }


     }
   void BST::Displaypreodr()
   {
       preoder(root);
      //  Postoder(root);
      //  Inoder(root);

        
   }
     node * BST::Search(int data )
     {
      node *ptr=root;
      while(ptr!=NULL)
      {
           if(ptr->data==data)
           {
                return ptr;             
           }
            if(ptr->data >data)
           {
              ptr=ptr->left;
            
           }
            else // if(ptr->data<data)
            {
                ptr=ptr->right;
            }
           
      }
      return  NULL;

     }
   
int main()
{
    BST b1;
    //   b1.Inserted(3);
    //   b1.Inserted(6);
    //   b1.Inserted(5);
    //   b1.Inserted(7);
    //  cout<< b1.Search(4);
    // // b1.Displaypreodr();

  
}
 