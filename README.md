<p align="center">
        <img src="https://capsule-render.vercel.app/api?type=waving&color=auto&height=250&section=header&text=Holbertonschool&fontSize=80&animation=fadeIn&fontAlignY=38&desc=BINARY%20TREE%20|%20T2-%2005/25%&descAlignY=51&descAlign=73">
</p>

## DOCUMENTATION :  

https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html  
http://crasseux.com/books/ctutorial/argc-and-argv.html  
https://www.youtube.com/watch?v=aP1ijjeZc24  
<br/>
 

## Binary Tree DESCRIPTION :

## PROTOTYPES :
`typedef struct binary_tree_s bst_t;`   
`typedef struct binary_tree_s avl_t;`   
`typedef struct binary_tree_s heap_t;`    
`void binary_tree_print(const binary_tree_t *);`    
`binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`  
`binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`  
`binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`  
`void binary_tree_delete(binary_tree_t *tree);`  
`int binary_tree_is_leaf(const binary_tree_t *node);`  
`int binary_tree_is_root(const binary_tree_t *node);`  
`void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`  
`void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`  
`void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`  
`size_t binary_tree_height(const binary_tree_t *tree);`  
`size_t binary_tree_depth(const binary_tree_t *tree);`  
`size_t binary_tree_size(const binary_tree_t *tree);`  
`size_t binary_tree_leaves(const binary_tree_t *tree);`  
`size_t binary_tree_nodes(const binary_tree_t *tree);`  
`int binary_tree_balance(const binary_tree_t *tree);`  
`int binary_tree_is_full(const binary_tree_t *tree);`  
`int binary_tree_is_perfect(const binary_tree_t *tree);`  
`binary_tree_t *binary_tree_sibling(binary_tree_t *node);`  
`binary_tree_t *binary_tree_uncle(binary_tree_t *node);`  

## COMPILATION :
You need to type for: 
- task 0 : `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o "NameOfTheScriptFile"`
- task 1 : `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o  "NameOfTheScriptFile"`
- task 2 : `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o "NameOfTheScriptFile"`
- task 3 - .. : `$gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o "NameOfTheScriptFile"`.  
- ...


## EXECUTION :
You need to type `./NameOfTheScriptFile` to execute your script.


## PROJECTS FILES & SCRIPT | Mandatory :

| Files Names  |      Mains Names     | Scripts | Description        |
| ----------- | ---------------------|---|------- 
| 0-binary_tree_node.c |  0-main.c | 0-node | creates a binary tree node
| 1-binary_tree_insert_left.c| 1-main.c| 1-left | inserts a node as the left-child of another node
| 2-binary_tree_insert_right.c | 2-main.c | 2-right | inserts a node as the right-child of another node
| 3-binary_tree_delete.c | 3-main.c | 3-del | that deletes an entire binary tree
| 4-binary_tree_is_leaf.c | 4-main.c | 4-leaf | that checks if a node is a leaf
| 5-binary_tree_is_root.c | 5-main.c | 5-root | that checks if a given node is a root
| 6-binary_tree_preorder.c | 6-main.c | 6-pre | goes through a binary tree using pre-order traversal
| 7-binary_tree_inorder.c | 7-main.c | 7-in | goes through a binary tree using in-order traversal
| 8-binary_tree_postorder.c | 8-main.c | 8-post | goes through a binary tree using post-order traversal
| 9-binary_tree_height.c | 9-main.c | 9-height |  that measures the height of a binary tree
| 10-binary_tree_depth.c | 10-main.c | 10-depth |  that measures the depth of a node in a binary tree
| 11-binary_tree_size.c | 11-main.c | 11-size | that measures the size of a binary tree
| 12-binary_tree_leaves.c | 12-main.c | 12-leaves | that counts the leaves in a binary tree
| 13-binary_tree_nodes.c | 13-main.c | 13-nodes | that counts the nodes with at least 1 child in a binary tree
| 14-binary_tree_balance.c | 14-main.c | 14-balance | that measures the balance factor of a binary tree
| 15-binary_tree_is_full.c | 15-main.c | 15-full |  that checks if a binary tree is full
| 16-binary_tree_is_perfect.c | 16-main.c | 16-perfect |  that checks if a binary tree is perfect
| 17-binary_tree_sibling.c | 17-main.c | 17-sibling |   that finds the sibling of a node
| 18-binary_tree_uncle.c | 18-main.c | 18-uncle |   that finds the uncle of a node


### Others :
| Files Names     | Descriptions                                                                 |
| ----------- | ---------------------
|binary_trees.h| Contains the libraries and the prototypes of our functions
|binary_tree_print.c |Functions to print binary trees in a pretty way
|README.md| Contains all the informations of the Sorting algorithms & Big O project


### AUTHORS :

👩 Vanessa TESSIER | 👩 Marlyne	 IHORIMBERE | 
<br/><hr>
<p align="right">Holberton TOULOUSE<br/>C19 Cohort | Janv. 2023</p>
