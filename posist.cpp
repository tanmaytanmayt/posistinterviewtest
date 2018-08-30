#include<bits/stdc++.h>
using namespace std;

int nodeno=0;
struct node{

string timestamp;
string data;
int nodeNumber;
string nodeId;
string referenceNodeId;
string childReferenceNodeId;
string genesisReferenceNodeId;
sting HashValue;
int childsum;
struct node* parent;


}

vector< vector <int> >arr[100001];

void creategennode()
{
    cout<<"Enter node value \n";
    string data;
    cin>>data;
    arr[nodenumber][parent]=1;
    arr[parent][nodenumber]=1;

}

void createchildnode(int sum)
{
    cout<<"Enter node value \n";
    int data;
    cin>>data;
    if(gensum-sum<=data)
    {
        arr[nodenumber][parent]=1;
        arr[parent][nodenumber]=1;
    }



}

void createpartchildnode(int sum,int parentid)
{
    cout<<"Enter node value \n";
    int data;
    cin>>data;
    if(gensum-sum<=data)
    {
        arr[nodenumber][parentid]=1;
        arr[parentid][nodenumber]=1;
    }


}

void encryptnode()
{
    int key;
    cout<<"enter key for encryption \n";
    cin>>key;
    rsa(arr[nodenumber]);

}


void decryptnode()
{
    int key;
    cout<<"enter key for decryption \n";
    cin>>key;
    ursa(arr[nodenumber]);

}

int main()

    cout<<"Enter the number corresponding to the choices: \n";
    cout<<"1. Create genesis node \n";
    cout<<"2. Create child node \n";
    cout<<"3. Create particular parent child node\n";
    cout<<"4. Encrypt data inside node \n";
    cout<<"5. Decrypt data inside node \n";
    cout<<"6. Verify node \n";
    cout<<"7. Find longest chain of genesis node\ n";
    cout<<"8. Find longest chain of any node \n";
    cout<<"9. Merge 2 nodes";
    cout<<"10. Edit nodes";

    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1: creategennode();
                nodeno++;
                break;
        case 2 : createchildnode();
                break;

        case 3: createpartchildnode();
                break;
        case 4: encryptnode();
                break;

        case 5: decryptnode();
                break;

        case 6: verifynode();
                break;

        case 7: longestgennode();
                break;

        case 8: longestnode();
                break;

        case 9: mergenode();
                break;
        case 10: editnode();
                break;
    }
    return 0;
}
