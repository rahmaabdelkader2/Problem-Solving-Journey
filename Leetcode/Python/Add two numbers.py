class Solution(object):
    def addTwoNumbers(self, l1, l2):
        result = ListNode(0)
        ptr = result
        carry = 0

        while l1 is not None or l2 is not None:
            sum_val = carry

            if l1 is not None:
                sum_val += l1.val
                l1 = l1.next

            if l2 is not None:
                sum_val += l2.val
                l2 = l2.next

            carry = sum_val // 10
            sum_val = sum_val % 10

            ptr.next = ListNode(sum_val)
            ptr = ptr.next

        if carry == 1:
            ptr.next = ListNode(1)

        return result.next
