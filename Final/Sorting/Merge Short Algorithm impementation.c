1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void merge(int a[], int tmp[], int left, int mid, int right);
void msort(int a[], int tmp[], int left, int right);
void merge_sort(int a[], int tmp[], const int size);
void display(int a[],const int size);

int main()
{
    int a[SIZE] = {5,6,3,1,7,8,2,4};
    int tmp[SIZE];

    printf("--- C Merge Sort Demonstration --- \n");

    printf("Array before sorting:\n");
    display(a,SIZE);

    merge_sort(a, tmp, SIZE);

    printf("Array after sorting:\n");
    display(a,SIZE);

    return 0;
}

void merge_sort(int a[], int tmp[], const int size)
{
    msort(a, tmp, 0, size - 1);
}

void msort(int a[], int tmp[], int left, int right)
{
    int mid;
    if (right > left)
    {
        mid = (right + left) / 2;
        msort(a, tmp, left, mid);
        msort(a, tmp, mid + 1, right);
        merge(a, tmp, left, mid + 1, right);
    }
}

void merge(int a[], int tmp[], int left, int mid, int right)
{
    int i, left_end, count, tmp_pos;
    left_end = mid - 1;
    tmp_pos = left;
    count = right - left + 1;

    while ((left <= left_end) && (mid <= right))
    {
        if (a[left] <= a[mid])
        {
            tmp[tmp_pos] = a[left];
            tmp_pos = tmp_pos + 1;
            left = left +1;
        }
        else
        {
            tmp[tmp_pos] = a[mid];
            tmp_pos = tmp_pos + 1;
            mid = mid + 1;
        }
    }

    while (left <= left_end)
    {
        tmp[tmp_pos] = a[left];
        left = left + 1;
        tmp_pos = tmp_pos + 1;
    }
    while (mid <= right)
    {
        tmp[tmp_pos] = a[mid];
        mid = mid + 1;
        tmp_pos = tmp_pos + 1;
    }

    for (i = 0; i <= count; i++)
    {
        a[right] = tmp[right];
        right = right - 1;
    }
}

void display(int a[],const int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ",a[i]);

    printf("\n");
