// class MyHashSet {
//     vector<int>mp;
//     int siz;
// public:
//     MyHashSet() {
//         siz=1e4;
//         mp.resize(siz);
//         for(int i=0;i<1e4;i++)
//         {
//             mp[i]=-1;
//         }

//     }
    
//     void add(int key) {
//         if(contains(key)) return;
//         int index=(key)%siz;
//         if(mp[index]==-1)
//         mp[index]=key;
//         else
//         {
//             for(int j=0;j<siz;j++)
//             {
//                 int k=(index+(j*j))%siz;
//                 if(mp[k]==-1)
//                 {
//                     mp[k]=key;
//                     break;
//                 }
//             }
//         }
//     }
    
//     void remove(int key) {
//         if(!contains(key))return;
//          int index=key%siz;
//          if(mp[index]==key)
//          {
//              mp[index]=-1;
//              return;
//          }
//         for(int j=0;j<siz;j++)
//         {
//             int k=(index+(j*j))%siz;
//             if(mp[k]==key)
//             mp[k]=-1;
//         }
//         // return false;
//     }
    
//     bool contains(int key) {
//         int index=key%siz;
//         for(long long int j=0;j<siz;j++)
//         {
//             long long int k=(index+(j*j))%siz;
//             if(mp[k]==key)
//             return true;
//         }
//         return false;
//     }
// };

// /**
//  * Your MyHashSet object will be instantiated and called as such:
//  * MyHashSet* obj = new MyHashSet();
//  * obj->add(key);
//  * obj->remove(key);
//  * bool param_3 = obj->contains(key);
//  */class MyHashSet {
//     vector<int>mp;
//     int siz;
// public:
//     MyHashSet() {
//         siz=1e4;
//         mp.resize(siz);
//         for(int i=0;i<1e4;i++)
//         {
//             mp[i]=-1;
//         }

//     }
    
//     void add(int key) {
//         if(contains(key)) return;
//         int index=(key)%siz;
//         if(mp[index]==-1)
//         mp[index]=key;
//         else
//         {
//             for(int j=0;j<siz;j++)
//             {
//                 int k=(index+(j*j))%siz;
//                 if(mp[k]==-1)
//                 {
//                     mp[k]=key;
//                     break;
//                 }
//             }
//         }
//     }
    
//     void remove(int key) {
//         if(!contains(key))return;
//          int index=key%siz;
//          if(mp[index]==key)
//          {
//              mp[index]=-1;
//              return;
//          }
//         for(int j=0;j<siz;j++)
//         {
//             int k=(index+(j*j))%siz;
//             if(mp[k]==key)
//             mp[k]=-1;
//         }
//         // return false;
//     }
    
//     bool contains(int key) {
//         int index=key%siz;
//         for(long long int j=0;j<siz;j++)
//         {
//             long long int k=(index+(j*j))%siz;
//             if(mp[k]==key)
//             return true;
//         }
//         return false;
//     }
// };

// /**
//  * Your MyHashSet object will be instantiated and called as such:
//  * MyHashSet* obj = new MyHashSet();
//  * obj->add(key);
//  * obj->remove(key);
//  * bool param_3 = obj->contains(key);
//  */