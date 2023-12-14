#include <iostream>
#define capacity 100
using namespace std;
 int siz= 0;
struct Hashnode {
    int key;
    int value;
};

struct Hashnode** a;
struct Hashnode* ext;
void insert(int key, int V){
struct Hashnode* temp = (struct Hashnode*)malloc(sizeof(struct Hashnode));
    int hashIndex = key % capacity;
    temp->key = key;
    temp->value = V;
    while (a[hashIndex] != NULL && a[hashIndex]->key != key && a[hashIndex]->key != -1) {
        hashIndex++;
        hashIndex %= capacity;
    }
     if (a[hashIndex] == NULL || a[hashIndex]->key == -1)
        siz++;
 
    a[hashIndex] = temp;
}
int find(int key){
    int hashIndex = (key % capacity);
    int counter = 0;
    while (a[hashIndex] != NULL) {
        int counter = 0;
        if (counter++ > capacity)
            break;
    if (a[hashIndex]->key == key)
            return a[hashIndex]->value;
        hashIndex++;
        hashIndex %= capacity;
    }
         return -1;
}
int deleteKey(int key){
    int hashIndex = key % capacity;
 
    while (a[hashIndex] != NULL) {
        if (a[hashIndex]->key == key) {
            a[hashIndex] = ext;
            siz--;
            return 1;
        }
        hashIndex++;
        hashIndex %= capacity;
    }
    return 0;
}




// Linked List node
struct node {
	int key;
	int value;
	struct node* next;
};

void setNode(struct node* node, int key, int value) {
	node->key = key;
	node->value = value;
	node->next = NULL;
	return;
}

struct hashmap {
	int elements, Capacity;
	struct node** arr;
};

void hashmaps(struct hashmap* m) {
	m->Capacity = 100;
	m->elements = 0;
	m->arr = (struct node**)malloc(sizeof(struct node*)*m->Capacity);
	return;
}

int hashFunction(struct hashmap* mp, int key) {
	int bucketIndex;
	int sum = 0, factor = 31;
		sum = ((sum % mp->Capacity) + ((key) * factor) % mp->Capacity) % mp->Capacity;
		factor = ((factor % __INT16_MAX__) * (31 % __INT16_MAX__)) % __INT16_MAX__;
	
	bucketIndex = sum;
	return bucketIndex;
}

void insert(struct hashmap* mp, int key, int value) {
	int bucketIndex = hashFunction(mp, key);
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	setNode(newnode, key, value);
	if (mp->arr[bucketIndex] == NULL) {
		mp->arr[bucketIndex] = newnode;
	}

	else {
	
		newnode->next = mp->arr[bucketIndex];
		mp->arr[bucketIndex] = newnode;
	}
	return;
}

void deleteKey(struct hashmap* mp, int key) {
	int index = hashFunction(mp, key);
	struct node* prevNode = NULL;
	struct node* currNode = mp->arr[index];
	while (currNode != NULL) {
		if (key==currNode->key){
			if (currNode == mp->arr[index]) {
				mp->arr[index] = currNode->next;
			}
			else {
				prevNode->next = currNode->next;
}
free(currNode);
break;
}

prevNode = currNode;
		currNode = currNode->next;
	}
return;
}

int search(struct hashmap* mp, int key) {
int bucketIndex = hashFunction(mp, key);
struct node* bucketHead = mp->arr[bucketIndex];
while (bucketHead != NULL) {
	if (bucketHead->key== key) {
		return bucketHead->value;
	}
	bucketHead = bucketHead->next;
}
cout<<"NOT FOUND"<<endl;
return -1;
}





int main(){
    int choic;
    cout<<"Enter 1 for Open Addressing and 2 for Seperate Chaining "<<endl;
    cin>>choic;
    if(choic==1){
        int choice;
        int key=1;
        do{
            cout<<"1. Insert 2. Delete 3. Search 4. Exit"<<endl;
            cin>>choice;
            switch(choice){
        case 1:{
        int a;
        cout<<"Enter number to insert"<<endl;
        cin>>a;
        insert(key,a);
        key++;
        break;
        }
        case 2:{
            int a;
        cout<<"Enter key to delete"<<endl;
        cin>>a;
            cout<<deleteKey(a)<<endl;
            break;
        }
        case 3:{
             int a;
        cout<<"Enter key to Search"<<endl;
        cin>>a;
        cout<<find(a)<<endl;
        }
        
        case 4:{
            cout<<"Exit"<<endl;
            break;
        }
        
            }
        }while(choice!=4);
    }
    else if(choic==2){
         int choice;
        int key=1;
        struct hashmap* mp = (struct hashmap*)malloc(sizeof(struct hashmap));
         hashmaps(mp);
        do{
            cout<<"1. Insert 2. Delete 3. Search 4. Exit"<<endl;
            cin>>choice;
            switch(choice){
        case 1:{
        int a;
        cout<<"Enter number to insert"<<endl;
        cin>>a;
        insert(mp,key,a);
        key++;
        break;
        }
        case 2:{
            int a;
        cout<<"Enter key to delete"<<endl;
        cin>>a;
            deleteKey(mp,a);
            break;
        }
        case 3:{
             int a;
        cout<<"Enter key to Search"<<endl;
        cin>>a;
        cout<<search(mp,a)<<endl;
        }
        
        case 4:{
            cout<<"Exit"<<endl;
            break;
        }
        
            }
        }while(choice!=4);
    }
    
    return 0;
}