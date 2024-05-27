#include<vector>
class Solution {
public:
    static std::vector<std::vector<int>> generateMatrix(int n) {
        std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));
        //����Ԫ��
        int left = 0, right = n - 1;
        int row = 0, lastRow = n - 1;
        int i = 1, maxNum = n * n;
        while (i< maxNum) {
            //����Ԫ��
            //�ϱ���
            int j;
            for (j = left; j < right; j++, i++) result[row][j] = i;
            //������
            for (j = row; j <lastRow; j++,i++) result[j][right] = i;
            //���±���
            for (j = right; j > left; j--, i++) result[lastRow][j] = i;
            //�������
            for (j = lastRow; j > row; j--, i++) result[j][left] = i;
            left++; row++;
            lastRow--; right--;
        }
        if (result[row][left] == 0) result[row][left] = maxNum; //����м�û�и�ֵ������е����ĸ�ֵ
        return result;
    }
};


int main() {
    std::vector<std::vector<int>> re = Solution::generateMatrix(2);
    return 0;
}