#Determine if the input sequence forms an arithmetic progression, if not enter “null”
#If it is an arithmetic sequence, output the sum of the next subsequent 100 terms.

def is_arithmetic_progression(seq):
    if len(seq) < 2:
        return False

common_diff = seq[1] - seq[0]
for i in range(1, len(seq) - 1):
    if seq[i + 1] - seq[i] != common_diff:
        return False
return True

def sum_of_next_100_terms(seq):
    if not is_arithmetic_progression(seq):
        return "null"

common_diff = seq[1] - seq[0]
n = 100
last_term_of_sequence = seq[-1]
first_term_of_new_series = last_term_of_sequence + common_diff
sum_next_100 = n/2 * (2 * first_term_of_new_series + (n - 1) * common_diff)
return sum_next_100


sequence1 = [314159, 316877, 319595, 322313, 325031, 327749, 330467, 333185, 335903, 338621, 341339, 344057, 346775, 349493, 352211, 354929, 357647, 360365, 363083, 365801, 368519, 371237, 373955, 376673, 379391, 382109, 384827, 387545, 390263, 392981, 395699, 398417, 401135, 403853, 406571, 409289, 412007, 414725, 417443, 420161, 422879, 425597]
print(sum_of_next_100_terms(sequence1))
