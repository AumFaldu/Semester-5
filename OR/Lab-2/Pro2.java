import java.util.Arrays;
import java.util.Scanner;

public class Pro2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of tasks: ");
        int n1 = sc.nextInt();
        int[] time = new int[n1];

        System.out.println("Enter number of servers: ");
        int n2 = sc.nextInt();
        int[] server = new int[n2];

        for (int i = 0; i < n1; i++) {
            System.out.println("Enter value of time[" + i + "]: ");
            time[i] = sc.nextInt();
        }

        Arrays.sort(time);
        reverseArray(time);

        distributeTasksRecursively(time, server, 0);

        int maxLoad = findMax(server);

        System.out.println("Minimum possible maximum processing time: " + maxLoad);
        sc.close();
    }

    private static void distributeTasksRecursively(int[] tasks, int[] servers, int index) {
        if (index >= tasks.length) return;

        int minIndex = findMinIndex(servers);
        servers[minIndex] += tasks[index];

        distributeTasksRecursively(tasks, servers, index + 1);
    }

    private static int findMinIndex(int[] servers) {
        int minIndex = 0;
        for (int i = 1; i < servers.length; i++) {
            if (servers[i] < servers[minIndex]) minIndex = i;
        }
        return minIndex;
    }

    private static int findMax(int[] servers) {
        int maxLoad = servers[0];
        for (int i = 1; i < servers.length; i++) {
            if (servers[i] > maxLoad) maxLoad = servers[i];
        }
        return maxLoad;
    }

    private static void reverseArray(int[] arr) {
        int left = 0, right = arr.length - 1;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}