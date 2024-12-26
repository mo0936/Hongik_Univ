# 10장 과제

fit <- lm(decrease~treatment , data = OrchardSprays) 
anova(fit)
install.packages("agricolae")
library(agricolae)
duncan.test(fit, "treatment", alpha=0.05, console=TRUE)

boxplot(decrease~treatment, data = OrchardSprays)



#H의 @@감소량은 나머지와 다르다

# 보라색은 나머지와 다르다
# 노란색 셋은 같고 나머지와 다르다
# 파란색 셋이 같다
# A,B와 D는 다르다
# 초록색과 파란색은 나머지와 다르다