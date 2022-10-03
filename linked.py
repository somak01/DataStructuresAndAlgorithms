from pyparsing import null_debug_action


class Node:
    
    data = None
    next = None
    
    
def main():
    head_node = Node
    head_node.data = 12
    head_node.next = 13
    
    
    
if __name__ == "__main__":
    main()
    