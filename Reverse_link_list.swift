//
//  main.swift
//  ReverseLinkList
//
//  Created by Saddam on 22/9/22.
//

import Foundation

class ListNode{
    
    var val: Int
    var next: ListNode?
    
    init(val: Int){
        self.val = val
    }
}

class ReverseLinkList{
    
    func reverseList(_ head: ListNode?) -> ListNode? {
        var prev: ListNode?
        var root = head
        
        while root != nil{
            let rootNext = root?.next
            root?.next = prev
            prev = root
            root = rootNext
        }
        return prev
    }
}

var head = ListNode(val: 1)
var ob2 = ListNode(val: 2)
head.next = ob2
var ob3 = ListNode(val: 3)
ob2.next  = ob3

ob3.next = nil

var root: ListNode?

root = head
print("Before Reversed")
while root != nil{
    print(root!.val)
    root = root?.next
}

print("After Reversed")

var rootForReverse: ListNode?
rootForReverse = head

var listLink = ReverseLinkList()
var reverseHead = listLink.reverseList(rootForReverse)

while reverseHead != nil{
    print(reverseHead!.val)
    reverseHead = reverseHead?.next
}


