import "strconv"
func isPalindrome(x int) bool {
    
    /*if x < 0 || (x%10 ==0 && x!=0) {
        return false
    }
    
    ans := 0
    
    for ans < x {
        ans = ans*10 + x%10
        x /= 10
    }
    
    return x==ans || x==ans/10*/
   
    ans := strconv.Itoa(x)
    
    i,j := 0, len(ans)-1
    
    for i<j{
        if ans[i]!=ans[j] {
            return false
        }
        i++
        j--
    }
    
    return true
}