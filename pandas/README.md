# Pandas Reference

## pandas diff
```
import pandas as pd
a = pd.DataFrame(dict(a=[1,2,3], b=[3,2,1]))
b = pd.DataFrame(dict(a=[1,2,3], b=[3,2,1]))

dif = a.merge(b,indicator=True,how='outer')
len(dif[dif['_merge'] != 'both'])
```
