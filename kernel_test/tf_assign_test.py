# utf-8

import tensorflow as tf 

def test_1():
	with tf.device('/gpu:0'):
		a = tf.Variable([10, 20])
	with tf.device('/cpu:0'):
	   	b = tf.Variable([20,30])
	c = tf.assign(a,b)

	with tf.Session() as sess:
		sess.run(tf.global_variables_initializer())
		print("Test_1 run a :",sess.run(a))
		print("Test_1 run b :",sess.run(b))
		print("Test_1 run c :",sess.run(c))

def test_2():
	with tf.device('/cpu:0'):
		a = tf.Variable([10, 20])
	with tf.device('/gpu:0'):
		b = tf.Variable([20,30])
	c = tf.assign(a,b)
	with tf.Session() as sess:
		sess.run(tf.global_variables_initializer())
		print("Test_1 run a :",sess.run(a))
		print("Test_1 run b :",sess.run(b))
		print("Test_1 run c :",sess.run(c))

def main():
	test_1()
	test_2()

if __name__ == '__main__':
	main()
