x <- c(A = 20, B = 55, C = 25)
x <- as.table(x)
x
p <- c(1/4, 1/2, 1/4)
x2 <- chisq.test(x, p=p)
x2

X2$observed
X2$expected



r1 <- c(6, 34)
r2 <- c(3, 97)
M <- as.table(rbind(r1, r2))
dimnames(M) <- list(smoking  = c("Smoking", "No Smoking"), 
			LunhCancer = c("Cancer", "No Cancer"))
M

X2 <- chisq.test(M)
X2

#P 값이 0.05보다 작으니 귀무가설 기각