//Program to demonstrate doubly linked list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//defining the structure for node
typedef struct Node{
	struct Node *prevSong;
	char songName[100];
	struct Node *nextSong;	
}node;

node* createNode(char song[]){
	node* temp = (node*)malloc(sizeof(node));
	strcpy(temp->songName, song);
	temp->prevSong = temp->nextSong = NULL;
	return temp;
}
node* addFirst(node* playList, char song[]){
	node* newSong = createNode(song);
	if(playList){
		//list contains songs
		newSong->nextSong = playList;
		playList->prevSong = newSong;	
	}
	playList = newSong;
	return playList;
}
node* addLast(node* playList, char song[]){
	node* newSong = createNode(song);
	if (playList){
		//playlist is not empty
		node* temp;
		for (temp = playList;temp->nextSong;temp=temp->nextSong);
		temp->nextSong = newSong;
		newSong->prevSong = temp;
	}
	else
		playList = newSong;
	return playList;
}
node* addAt(node* playList, char songName[]){
	
}
node* deleteFirstSong(node* playList){
	if (playList){
		//play list is not empty
		//checking whether the list contains only one song
		node* temp = playList;
		if (playList->nextSong==NULL){
			playList = NULL;
		}
		else{
			playList = temp->nextSong;
			playList->prevSong = NULL;
		}
		free(temp);
	}
	return playList;
}
node* deleteLastSong(node* playList){
	
}
node* deleteSongAt(node* playList, int position){
	
}
void printList(node* playList){
	if (playList){
		//play list is not empty
		printf("\nForward traversal : ");
		printf("\n[");
		node* temp;		
		for (temp = playList; temp->nextSong; temp=temp->nextSong)
			printf("\"%s\",", temp->songName);
		printf("\"%s\"]", temp->songName);
		printf("\nBackward traversal : ");
		printf("\n[");
		for (; temp->prevSong; temp=temp->prevSong)
			printf("\"%s\",", temp->songName);
		printf("\"%s\"]", temp->songName);		
	}
	else
		printf("\n[]");
}

int main(){
	node* playList = NULL;
	playList = addFirst(playList, "Thalapathy Kacheri");
	playList = addFirst(playList, "Kavala");
	playList = addFirst(playList, "Saavarika");
	playList = addLast(playList, "Thenmadurai");
	printList(playList);
	playList = deleteFirstSong(playList);
	printList(playList);
	return 0;
}