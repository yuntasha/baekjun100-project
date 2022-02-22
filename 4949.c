#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE	1
#define FALSE	0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node * next;
} Node;

typedef struct _listStack
{
	Node * head;
} ListStack;


typedef ListStack Stack;

void StackInit(Stack * pstack) //스택의 초기화
{
	pstack->head = NULL;
}

int SIsEmpty(Stack * pstack) //스택이 비었는지 확인
{
	if(pstack->head == NULL) //연결리스트의 머리가 가리키는 것이 없을 시 비었다고 확인
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack * pstack, Data data) //스택에 데이터 넣기
{
	Node * newNode = (Node*)malloc(sizeof(Node)); //노드 작성

	newNode->data = data; //데이터 넣기
	newNode->next = pstack->head; 

	pstack->head = newNode;
}

Data SPop(Stack * pstack) //스택에 데이터 꺼내기
{
	Data rdata;
	Node * rnode;

	if(SIsEmpty(pstack)) { //스택이 비었을 시 오류
		printf("Stack Memory Error!");
		exit(-1);
	}

	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	free(rnode);

	return rdata;
}

Data SPeek(Stack * pstack) //스택의 데이터 중 마지막 데이터 확인
{
	if(SIsEmpty(pstack)) { //스택이 비었을 시 오류
		printf("Stack Memory Error!");
		exit(-1);
	}

	return pstack->head->data;
}


int main()
{
    Stack s;
    StackInit(&s);
    Stack b;
    StackInit(&b);
    char sen[1000];
    int i=0;
	int tf;
    int yz;
    while(1)
    {
        StackInit(&s);//소괄호
        StackInit(&b);//대괄호
        i=0;
		
        gets(sen);
        if(!strcmp(sen,"."))
        {
            break;
        }
		tf=0;
        while(1)
        {
            if(sen[i]=='(')
            {
                SPush(&s,1);
                yz=1;
            }
            else if(sen[i]==')')
            {
				if(SIsEmpty(&s)) 
				{
					tf=1;
				}
				else
				{
                	if(SPop(&s)!=1)
                    {
                        tf=1;
                    }
				}
            }
            else if(sen[i]=='[')
            {
                SPush(&s,2);
            }
            else if(sen[i]==']')
            {
				if(SIsEmpty(&s)) 
				{
					tf=1;
				}
				else
				{
                	if(SPop(&s)!=2)
                    {
                        tf=1;
                    }
				}
            }
            else if(sen[i]=='.')
            {
                break;
            }
            i++;
        }
        if(SIsEmpty(&s)&&tf==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
	return 0;
}