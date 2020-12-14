#include "StackQueue.h"
#include <gtest.h>

TEST(TStack, can_create_stack)
{
	ASSERT_NO_THROW(TStackOnList<int> A);
}

TEST(TStack, can_copy_stack)
{
	TStackOnList<int> A;
	A.push(100);
	ASSERT_NO_THROW(TStackOnList<int> B(A));
}

TEST(TStack, push)
{
	TStackOnList<int> A;
	A.push(1);
	A.push(2);

	EXPECT_EQ(2, A.pop());
}

TEST(TStack, pop)
{
	TStackOnList<int> A;
	A.push(1);
	A.push(2);
	A.push(3);
	A.pop();
	A.pop();

	EXPECT_EQ(1, A.pop());
}

TEST(TStack, IsEmpty)
{
	TStackOnList<int> A;
	EXPECT_EQ(1, A.IsEmpty());
}


TEST(TQueue, can_create_queue)
{
	ASSERT_NO_THROW(TQueueOnList<int> A);
}

TEST(TStack, can_copy_queue)
{
	TQueueOnList<int> A;
	A.push(100);
	ASSERT_NO_THROW(TQueueOnList<int> B(A));
}

TEST(TQueue, push)
{
	TQueueOnList<int> A;
	A.push(1);
	A.push(2);
	EXPECT_EQ(1, A.pop());
}

TEST(TQueue, pop)
{
	TQueueOnList<int> A;
	A.push(1);
	A.push(2);
	A.push(3);
	A.pop();
	A.pop();

	EXPECT_EQ(3, A.pop());
}

TEST(TQueue, IsEmpty)
{
	TQueueOnList<int> A;
	EXPECT_EQ(1, A.IsEmpty());
}