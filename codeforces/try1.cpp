#include <stdio.h>
#include <stdlib.h>

// ---------------- FCFS ----------------
void fcfs(int req[], int n, int head) {
    int seek = 0;

    for (int i = 0; i < n; i++) {
        seek += abs(req[i] - head);
        head = req[i];
    }

    printf("FCFS Total Seek Time = %d\n", seek);
}

// ---------------- SSTF ----------------
void sstf(int req[], int n, int head) {
    int visited[n];
    int seek = 0;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    for (int i = 0; i < n; i++) {
        int min = 100000, index = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j]) {
                int dist = abs(req[j] - head);
                if (dist < min) {
                    min = dist;
                    index = j;
                }
            }
        }

        visited[index] = 1;
        seek += min;
        head = req[index];
    }

    printf("SSTF Total Seek Time = %d\n", seek);
}

// ---------------- SCAN ----------------
void scan(int req[], int n, int head, int size) {
    int seek = 0;
    int visited[n];

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    // Move right
    for (int i = head; i < size; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[j] && req[j] == i) {
                seek += abs(head - i);
                head = i;
                visited[j] = 1;
            }
        }
    }

    // Move left
    for (int i = head; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (!visited[j] && req[j] == i) {
                seek += abs(head - i);
                head = i;
                visited[j] = 1;
            }
        }
    }

    printf("SCAN Total Seek Time = %d\n", seek);
}

// ---------------- C-SCAN ----------------
void cscan(int req[], int n, int head, int size) {
    int seek = 0;
    int visited[n];

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    // Move right
    for (int i = head; i < size; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[j] && req[j] == i) {
                seek += abs(head - i);
                head = i;
                visited[j] = 1;
            }
        }
    }

    // Jump to beginning
    seek += abs(head - (size - 1));
    head = 0;

    // Move right again
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[j] && req[j] == i) {
                seek += abs(head - i);
                head = i;
                visited[j] = 1;
            }
        }
    }

    printf("C-SCAN Total Seek Time = %d\n", seek);
}

// ---------------- MAIN ----------------
int main() {
    int req[] = {98, 183, 37, 122, 14, 124, 65, 67};
    int n = 8;
    int head = 53;
    int size = 200;

    fcfs(req, n, head);
    sstf(req, n, head);
    scan(req, n, head, size);
    cscan(req, n, head, size);

    return 0;
}