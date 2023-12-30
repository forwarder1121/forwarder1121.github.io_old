var store = [{
        "title": "블로그의 방향성",
        "excerpt":" 어떻게 쓰지 앞으로 컴퓨터 관련한 글은 깃 블로그를 통해 공유할 예정이다. 당분간은 ‘자료구조’ 과목 관련한 포스팅을 진행한 뒤, ‘알고리즘’ 과목에 대한 포스팅을 이어갈 계획을 가지고 있다.  ","categories": ["TOP_CATEGORIE","SUB_CATEGORIE"],
        "tags": [],
        "url": "/top_categorie/sub_categorie/%EB%B8%94%EB%A1%9C%EA%B7%B8%EC%9D%98-%EB%B0%A9%ED%96%A5%EC%84%B1/",
        "teaser": null
      },{
        "title": "[자료구조] selectionsort",
        "excerpt":"Selection Sort 입력 : N&gt;=1개의 서로 다른 정수의 배열 a 출력 : 오름차순으로 구성된 배열 전략 각 i단계마다, a[i]부터 a[n-1]까지 탐색을 한 뒤, 가장 작은 수를 a[j]와 바꾼다. 스토리 반의 모든 아이들을 임의대로 한줄로 서게 한 뒤, 1회차에 1번째~끝 아이를 보고 1번째로 작은 키의 아이를 1번째 아이와 바꾸고, 2회차에 2번째~끝...","categories": [],
        "tags": ["자료구조"],
        "url": "/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-SelectionSort/",
        "teaser": null
      },{
        "title": "[자료구조] binarysearch",
        "excerpt":"BinarySearch 정렬된 정수의 집합에서 특정 원소를 찾는 알고리즘이다. 스토리 우리가 업다운 게임을 한다고 생각하면 된다. 1~100까지의 숫자를 내가 생각하고, 독자가 이를 맞추어야 하는 상황. 이때 나는 Up,Down의 유무만 알려줄 것이다. 당신은 어떻게 내가 생각한 숫자를 맞출 것인가? 그렇다. 당신이 지금 떠올린 방법이 BinarySearch, 즉 이진탐색이다. 의사 코드 void binarySearch(int* array,...","categories": [],
        "tags": ["자료구조"],
        "url": "/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-BinarySearch/",
        "teaser": null
      },{
        "title": "[자료구조] proof of binarysearch",
        "excerpt":"BinarySeach의 증명 어떤 문제를 해결하기 위해 알고리즘을 구성하는 것은 중요하다. 그러나 그에 못지 않게 알고리즘이 과연 정확하게 동작하는지 정확성에 대한 문제 또한 중요하다. 특히 컴퓨터를 전공하는 학생이라면 알고리즘의 타당성, 정확성에 항상 의문을 가지며 접근해야 할 것이다. 코드 int binarySearch(int* array, const int x, const int N) { int left =...","categories": [],
        "tags": ["자료구조"],
        "url": "/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-Proof-Of-BinarySearch/",
        "teaser": null
      },{
        "title": "[자료구조] recursivebinarysearch",
        "excerpt":"재귀적 BinarySearch 이진탐색의 알고리즘은 그대로 가져오되, 구현방식을 기존의 반복문에서 재귀로 바꿔보자. 참고) 반복 BinarySearch 나는 재귀로 구현할때가 좀더 생각하기 편했는데, 이유는 간단하다. 수학적 귀납법과 같이, Basis(n=초항)만 지정해주고 n=k일떄 맞게 동작하겠지… 라고 받아드린후 n=k+1일때만 생각해서 구현하면 되기 때문. 수학적귀납법의 구조를 재귀 알고리즘에 그대로 가져오게 되면 여기서 Basis는 종료조건, n=k는 그냥 믿어라...","categories": [],
        "tags": ["자료구조"],
        "url": "/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-recursiveBinarySearch/",
        "teaser": null
      },{
        "title": "[자료구조] proof of recursivebinarysearch",
        "excerpt":"재귀적 BInarySearch의 증명 개발자라면 알고리즘의 정확성을 때론 직접 증명할 수 있어야한다. 그럼으로써 알고리즘의 응용단계에서 왜 그런 알고리즘이 정확히 동작하는지를 판단할 수 있게 된다. Code int binarySearch_recursive(int* array, const int x, int left, int right) { //Basis1:x가 array에 존재하지 않을경우 if (left &gt;= right) return -1; //정렬된 array[left...right]에서 x를 탐색 int...","categories": [],
        "tags": ["자료구조"],
        "url": "/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-Proof-Of-RecursiveBinarySearch/",
        "teaser": null
      },{
        "title": "[자료구조] 순열생성기",
        "excerpt":"순열생성기 재귀 알고리즘을 이용하여 순열을 출력하는 함수를 만들어보자. 문제 정의 입력 : n&gt;=1개의 원소를 가진 집합 출력 : 가능한 모든 순열의 출력 ex) 입력이 {a,b,c} 라면 출력은 {(a,b,c), (a,c,d), (b,a,c), (b,c,a), (c,a,b), (c,b,a)} 문제 해결 전략 - 발상 위의 예를 보면, {a,b,c}라는 입력에 대해 a로 시작하는 순열 b로 시작하는 순열...","categories": [],
        "tags": ["자료구조"],
        "url": "/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-%EC%88%9C%EC%97%B4%EC%83%9D%EC%84%B1%EA%B8%B0/",
        "teaser": null
      },{
        "title": "[프로그래머스] 붕대 감기 ",
        "excerpt":"프로그래머스 문제 문제 설명 어떤 게임에는 붕대 감기라는 기술이 있습니다. 붕대 감기는 t초 동안 붕대를 감으면서 1초마다 x만큼의 체력을 회복합니다. t초 연속으로 붕대를 감는 데 성공한다면 y만큼의 체력을 추가로 회복합니다. 게임 캐릭터에는 최대 체력이 존재해 현재 체력이 최대 체력보다 커지는 것은 불가능합니다. 기술을 쓰는 도중 몬스터에게 공격을 당하면 기술이 취소되고,...","categories": [],
        "tags": [],
        "url": "/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%EB%B6%95%EB%8C%80-%EA%B0%90%EA%B8%B0/",
        "teaser": null
      },{
        "title": "[일기] 20대의 기회비용",
        "excerpt":"일기 개인적인 이야기를 적어보려 한다. 내 인생 이야기다. 존나 길다 2020년 운 좋게 건국대학교에 입학 한 뒤에 나는 대학에 가서 낭만 있는 캠퍼스를 꿈꿨었다. 당시엔 정말 꽃길만을 앞둔 사람 같이 무엇이든 다 할 수 있을 것만 같았다. 그러나 다들 기억하듯이 코로나가 터졌었다. 1학기 전면 비대면 전환 - 1학기는 아쉽지만 2학기는...","categories": [],
        "tags": [],
        "url": "/%EC%9D%BC%EA%B8%B0-20%EB%8C%80%EC%9D%98-%EA%B8%B0%ED%9A%8C%EB%B9%84%EC%9A%A9/",
        "teaser": null
      },{
        "title": "[백준] 이분 탐색",
        "excerpt":"백준 문제 문제 바로가기 문제 N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오. 입력 첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다. 다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다. 다음...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EC%9D%B4%EB%B6%84-%ED%83%90%EC%83%89/",
        "teaser": null
      },{
        "title": "[백준] if문 좀 대신 써줘",
        "excerpt":"백준 문제 [Silver III] IF문 좀 대신 써줘 - 19637 문제 링크 성능 요약 메모리: 3072 KB, 시간: 76 ms 분류 이분 탐색 제출 일자 2023년 12월 24일 22:22:52 문제 설명 게임 개발자인 밀리는 전투력 시스템을 만들어, 캐릭터가 가진 전투력을 기준으로 칭호를 붙여주려고 한다. 예를 들어, 전투력 10,000 이하의 캐릭터는...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-IF%EB%AC%B8-%EC%A2%80-%EB%8C%80%EC%8B%A0-%EC%8D%A8%EC%A4%98/",
        "teaser": null
      },{
        "title": "[백준] 예산 ",
        "excerpt":"백준 문제 [Silver II] 예산 - 2512 문제 링크 성능 요약 메모리: 1504 KB, 시간: 0 ms 분류 이분 탐색, 매개 변수 탐색 제출 일자 2023년 12월 24일 16:21:31 문제 설명 국가의 역할 중 하나는 여러 지방의 예산요청을 심사하여 국가의 예산을 분배하는 것이다. 국가예산의 총액은 미리 정해져 있어서 모든 예산요청을...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EC%98%88%EC%82%B0/",
        "teaser": null
      },{
        "title": "[백준] 단어 공부",
        "excerpt":"백준 문제 [Bronze I] 단어 공부 - 1157 문제 링크 성능 요약 메모리: 1972 KB, 시간: 12 ms 분류 구현, 문자열 제출 일자 2023년 12월 25일 20:50:42 문제 설명 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다. 입력...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EB%8B%A8%EC%96%B4-%EA%B3%B5%EB%B6%80/",
        "teaser": null
      },{
        "title": "[백준] 나무 자르기",
        "excerpt":"백준 문제 [Silver II] 나무 자르기 - 2805 문제 링크 성능 요약 메모리: 5020 KB, 시간: 224 ms 분류 이분 탐색, 매개 변수 탐색 제출 일자 2023년 12월 25일 11:34:43 문제 설명 상근이는 나무 M미터가 필요하다. 근처에 나무를 구입할 곳이 모두 망해버렸기 때문에, 정부에 벌목 허가를 요청했다. 정부는 상근이네 집...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EB%82%98%EB%AC%B4-%EC%9E%90%EB%A5%B4%EA%B8%B0/",
        "teaser": null
      },{
        "title": "[백준] 용돈 관리",
        "excerpt":"백준 문제 [Silver II] 용돈 관리 - 6236 문제 링크 성능 요약 메모리: 1508 KB, 시간: 20 ms 분류 이분 탐색, 매개 변수 탐색 제출 일자 2023년 12월 25일 16:51:58 문제 설명 현우는 용돈을 효율적으로 활용하기 위해 계획을 짜기로 하였다. 현우는 앞으로 N일 동안 자신이 사용할 금액을 계산하였고, 돈을 펑펑...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EC%9A%A9%EB%8F%88-%EA%B4%80%EB%A6%AC/",
        "teaser": null
      },{
        "title": "[일기] gdsc & 뤼튼 gen ai onboarding",
        "excerpt":"오늘은 정말 다양하고 흥미로운 경험을 얻었다. 콘서트에서는 AI와 OpenAI에 대한 다양한 주제가 다뤄졌고, 특히 산업 현장에서의 AI 기술 활용 및 미래에 대한 전망을 듣는 것은 정말로 유익했다. AI에 대해 전혀 모르는 상태에서 맨땅에 헤딩해보자는 마음가짐으로 참석했는데, 이는 굉장한 인사이트를 주는 경험이었다. 세상의 변화를 눈으로 직접 보는 느낌이었고, 부끄럽지만 나는 AI...","categories": [],
        "tags": [],
        "url": "/%EC%9D%BC%EA%B8%B0-GDSC-&-%EB%A4%BC%ED%8A%BC-Gen-AI-Onboarding/",
        "teaser": null
      },{
        "title": "Welcome to Jekyll!",
        "excerpt":"You’ll find this post in your _posts directory. Go ahead and edit it and re-build the site to see your changes. You can rebuild the site in many different ways, but the most common way is to run jekyll serve, which launches a web server and auto-regenerates your site when...","categories": ["jekyll","update"],
        "tags": [],
        "url": "/jekyll/update/welcome-to-jekyll/",
        "teaser": null
      },{
        "title": "[백준] 기타 레슨",
        "excerpt":"[Silver I] 기타 레슨 - 2343 문제 링크 성능 요약 메모리: 1504 KB, 시간: 16 ms 분류 이분 탐색, 매개 변수 탐색 제출 일자 2023년 12월 26일 21:40:10 문제 설명 강토는 자신의 기타 강의 동영상을 블루레이로 만들어 판매하려고 한다. 블루레이에는 총 N개의 강의가 들어가는데, 블루레이를 녹화할 때, 강의의 순서가 바뀌면...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EA%B8%B0%ED%83%80-%EB%A0%88%EC%8A%A8/",
        "teaser": null
      },{
        "title": "[백준] 랜선 자르기",
        "excerpt":"[Silver II] 랜선 자르기 - 1654 문제 링크 성능 요약 메모리: 8932 KB, 시간: 16 ms 분류 이분 탐색, 매개 변수 탐색 제출 일자 2023년 12월 26일 14:10:47 문제 설명 집에서 시간을 보내던 오영식은 박성원의 부름을 받고 급히 달려왔다. 박성원이 캠프 때 쓸 N개의 랜선을 만들어야 하는데 너무 바빠서 영식이에게...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EB%9E%9C%EC%84%A0-%EC%9E%90%EB%A5%B4%EA%B8%B0/",
        "teaser": null
      },{
        "title": "[백준] 공유기 설치",
        "excerpt":"[Gold IV] 공유기 설치 - 2110 문제 링크 성능 요약 메모리: 2684 KB, 시간: 52 ms 분류 이분 탐색, 매개 변수 탐색 제출 일자 2023년 12월 27일 11:34:03 문제 설명 도현이의 집 N개가 수직선 위에 있다. 각각의 집의 좌표는 x1, …, xN이고, 집 여러 개가 같은 좌표를 가지는 일은 없다....","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EA%B3%B5%EC%9C%A0%EA%B8%B0-%EC%84%A4%EC%B9%98/",
        "teaser": null
      },{
        "title": "[백준] 도토리 숨기기",
        "excerpt":"[Gold II] 도토리 숨기기 - 15732 문제 링크 성능 요약 메모리: 1116 KB, 시간: 4 ms 분류 이분 탐색 제출 일자 2023년 12월 29일 10:23:07 문제 설명 HEPC 1등 상금으로 도토리 D개를 받은 욕심많은 다람쥐 수형이는 자신의 모든 도토리를 뺏기지 않게 보관하려고 한다. 수형이는 1부터 N까지의 번호가 붙여있는 N개의 상자를...","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EB%8F%84%ED%86%A0%EB%A6%AC-%EC%88%A8%EA%B8%B0%EA%B8%B0/",
        "teaser": null
      },{
        "title": "[백준] 드래곤 앤 던전 ",
        "excerpt":"[Gold IV] 드래곤 앤 던전 - 16434 문제 링크 성능 요약 메모리: 2564 KB, 시간: 160 ms 분류 이분 탐색, 구현 제출 일자 2023년 12월 28일 11:35:51 문제 설명 용사는 공주를 구하기 위해 무시무시한 용이 있는 던전으로 향하기로 하였습니다. 우선 용사는 용사 자신과 던전을 분석하였습니다. 용사에게는 세 종류의 능력치가 있습니다....","categories": [],
        "tags": [],
        "url": "/%EB%B0%B1%EC%A4%80-%EB%93%9C%EB%9E%98%EA%B3%A4-%EC%95%A4-%EB%8D%98%EC%A0%84/",
        "teaser": null
      }]
