class Solution(object):
    def computeArea(self, ax1, ay1, ax2, ay2, bx1, by1, bx2, by2):
     
        area1 = (ax2 - ax1) * (ay2 - ay1)
        area2 = (bx2 - bx1) * (by2 - by1)
        summation = area1 + area2

        if ax1 <= bx2 and bx1 <= ax2 and ay1 <= by2 and by1 <= ay2:
            overlapping_area = (min(ax2, bx2) - max(ax1, bx1)) * (min(ay2, by2) - max(ay1, by1))
            summation -= overlapping_area

        return summation
