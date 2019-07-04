class Activity:
	def __init__(self, name, starting_time, finish_time):
		self.name = name
		self.s = starting_time
		self.f = finish_time
		self.duration = self.f - self.s

	def __repr__(self):
		return "Activity {}| Starts at {}|Finishes at {}".format(self.name, self.s, self.f)

def greedy_iterative_activity_selector(A):
	A.sort(key=lambda activity: activity.f)  # Sort A by finish times stored in f

	selected = [A[0]] # Add the first activity to the list of the selected ones
	k = 0
	n = len(A)

	for i in range(1, n):
		if (A[i].s >= A[k].f):
			selected.append(A[i])
			k = i
	return selected


def test():
	activity_names = 'A B C D E F G H'.split()
	starting_times = [1, 0, 1, 4, 2, 5, 3, 4]
	finish_times = [3, 4, 2, 6, 9, 8, 5, 5]

	activity_list = []

	for i in range(0, 8):
		activity_list.append(Activity(activity_names[i], starting_times[i], finish_times[i]))

	selection = greedy_iterative_activity_selector(activity_list)

	print("Selected ones: ")
	for activity in selection:
		print(activity)
	print("Amount: {}".format(len(selection)))

if __name__ == '__main__':
	test()
