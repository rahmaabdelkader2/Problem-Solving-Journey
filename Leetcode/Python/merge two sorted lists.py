# Definition for singly-linked list.
class ListNode(object):
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
     
        result = ListNode(0)
        ptr = result
        while list1 is not None and list2 is not None:
            if list1.val < list2.val:
                ptr.next = list1
                list1 = list1.next
            else:
                ptr.next = list2
                list2 = list2.next
            ptr = ptr.next

        if list1 is not None:
            ptr.next = list1
        else:
            ptr.next = list2    

        return result.next            

        