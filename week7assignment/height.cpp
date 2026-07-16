 int help(Node* root){
       if(root == NULL) return 0;
        int l = help(root->left);
        int r = help(root->right);
        return 1+max(l,r);
  }
    int height(Node* root) {
      return help(root) -1;
    }