class Node {
    constructor(info, next = null) {
        this.info = info;
        this.next = next;
    }
}


class LinkedList {
    constructor(){
        this.head = null;
    }
     
    insertAtTheBeginning(info){

        let temp = new Node(info);  
        // [info][null]---> temp want to insert on the first of the linked list 
        // lets sayy i want to insert 5 
        //then currently 10 is the head 
        // then i need to move the head to temp.next and assign current head as temp
        //10-->20, 20-->30 ,30 ---> null 
        temp.next = this.head;
        this.head = temp;
      
        
        
    }

    insertAtTheEnd(info){
        // create a new node 
        let temp = new Node(info);

        // chec if the linkedlist is empty or not 

        if ( this.head == null){
            this.head = temp;
            return;
        }

        let t1 = this.head;

        while ( t1.next != null){
            t1 = t1.next
        }

        t1.next = temp
    }

    printLinkedList(){
        let temp = this.head;
        while ( temp != null){
            console.log(temp.info);
            temp = temp.next;


        }
        console.log( " ");
    }

    insertAtTheMiddle(info, currentNodeInfo){
        //define new node first 

        let temp = new Node(info);

        if(this.head == null ){
            this.head = temp;
            return ;
        }

        let t1 = this.head;

        while( t1.next !== null){
          if ( t1.info == currentNodeInfo){
            temp.next = t1.next
            t1.next = temp;
            return;
          }

          t1 = t1.next;
        }

    }

    deleteLinkedList(info){
        let temp = this.head;
        let prev = null;

        if ( temp == null) {
            console.log("Linked list is empty");
            return;
        }

        if( temp.info == info){
            this.head = temp.next;
            return;
        }

        while ( temp != null ){
            if(temp.info == info){
                prev.next = temp.next;
                return;
            }
            prev = temp;
            temp = temp.next;
        }
    }

}

const obj = new LinkedList();
obj.insertAtTheBeginning(40)
obj.insertAtTheBeginning(30)
obj.insertAtTheBeginning(20)
obj.insertAtTheBeginning(10)
obj.insertAtTheEnd(50)
obj.insertAtTheMiddle(25,20)
obj.deleteLinkedList(30)
obj.printLinkedList()
