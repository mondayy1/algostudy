# Week1 - 우선순위 큐

## BOJ 2075 N번째 큰 수

- [문제](https://www.acmicpc.net/problem/2075)
- 해결

  `heapq`를 사용한 오름차순 `heap` list는 첫 번째에 입력받은 `x`만큼의 길이가 최대이도록 제어. 이후 `heap`이 가득 찼는지 아닌지 여부를 나눴고, 최종적으로는 `x`개 만큼의 큰 수만이 `heap`에 담기게 되므로 `heap[0]`을 출력하도록 하여 해결함.

## BOJ 14235 크리스마스 선물

- [문제](https://www.acmicpc.net/problem/14235)
- 해결

  내림차순 `heapq`를 사용해 아이들에게 선물을 나눠줄 때와 선물을 충전할 때 경우를 나눠 해결함.
