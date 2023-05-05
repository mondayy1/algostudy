### BOJ 1008  
float 와 double 중에 double이 데이터 범위가 더 넓다.
![image](https://user-images.githubusercontent.com/85085804/236471082-fcfdf73c-fd87-4d9d-bddc-05c96ddab606.png)
  
printf()를 이용해서 하면 %.9lf 같이 double의 자리수를 설정하면 된다.  
cout의 경우  
```  
cout << fixed // 정수 부분 고정  

cout.precisioin(int : 자리수) // 소수 부분 고정  

cout.width(int : 너비) // 출력될 표현의 총 너비 고정 (단, 다음에 만나는 하나의 cout에만 적용)  

```


### 그외
1) '\n', std::endl 속도 차이  
endl은 출력 버퍼를 비워주는 과정 (flush)도 하기 때문에 '\n'보다 느리다.
