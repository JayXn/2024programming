# Table 1: Student-Main
student_main <- data.frame(
  student_id = c(101, 102, 103, 104, 105),
  name = c("Alice", "Bob", "Charlie", "Daisy", "Eve"),
  payment_type = c("CASH", "CARD", "CASH", "TRANSFER", "CARD")
)

# Table 2: Fees
fees <- data.frame(
  payment_type = c("CASH", "CARD", "TRANSFER"),
  required_amount = c(500, 550, 600)
)

# Table 3: Student-Payment
student_payment <- data.frame(
  student_id = c(101, 102, 103, 104, 105),
  paid_amount = c(500, 500, 500, 600, 450)
)

# Merge to get required amounts
merged <- merge(student_main, student_payment, by = "student_id")
merged <- merge(merged, fees, by = "payment_type")

# Computation #1: total amount received
total_received <- sum(merged$paid_amount)
cat("Total amount received before due: ", total_received, "\n")

# Computation #2: students who underpaid
underpaid <- subset(merged, paid_amount < required_amount)
underpaid$short_amount <- underpaid$required_amount - underpaid$paid_amount

cat("Students who underpaid:\n")
for (i in 1:nrow(underpaid)) {
  cat(underpaid$name[i], "underpaid by", underpaid$short_amount[i], "\n")
}
