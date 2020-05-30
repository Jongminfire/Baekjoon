//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int up, down, size;
//	cin >> up >> down >> size;
//
//	int answer = (size-up) / (up-down);
//	if ((size - up) % (up - down) != 0)
//		answer++;
//
//	cout << answer+1 << "\n";
//
//	return 0;
//}
//
///*
//
//
//시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
//0.15 초 (추가 시간 없음)	128 MB	48522	11689	9885	26.654%
//문제
//땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.
//
//달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.
//
//달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/2869
//
//*/