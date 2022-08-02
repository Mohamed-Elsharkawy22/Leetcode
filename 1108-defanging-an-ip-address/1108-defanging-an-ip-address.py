class Solution(object):
    def defangIPaddr(self, address):
        address=address.replace(".","[.]");
        return address
        """
        :type address: str
        :rtype: str
        """
        