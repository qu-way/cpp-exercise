## 101. Symmetric Tree

题意：判断一个二叉树是不是镜像树。  


思路：分情况讨论。  

1. 两个子树都是空节点，则当前两个子树是镜像。  
2. 有一个是空节点时，则不是镜像。  
3. 都不是空节点时，如果子树的根不相等，则不是镜像。  
4. 否则，左子树的左儿子和右子树的右儿子比较，左子树的右儿子和右子树的左儿子比较，都是镜像子树是当前子树才是子树。  


## C++ 语言  


[tiankonguse.cpp](./tiankonguse.cpp)



