**difficulty level:** [**easy**] [medium] [hard] [very hard]

```cpp
#include <map>
#include <iostream>

int main()
{
	std::map<bool, bool> bmap;
	std::cout << bmap[true];
	bmap[false] = bmap[true];
	std::cout << bmap[false];
}
```
