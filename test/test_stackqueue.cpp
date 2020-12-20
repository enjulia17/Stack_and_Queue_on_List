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

TEST(TQueue, can_copy_queue)
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


TEST(TDeque, can_create_queue)
{
	ASSERT_NO_THROW(TDeque<int> A);
}

TEST(TDeque, can_copy_queue)
{
	TDeque<int> A;
	A.PushL(100);
	ASSERT_NO_THROW(TDeque<int> B(A));
}

TEST(TDeque, PushL)
{
	TDeque<int> A;
	A.PushL(1);
	A.PushL(2);
	EXPECT_EQ(1, A.PopR());
}

TEST(TDeque, PushR)
{
	TDeque<int> A;
	A.PushL(1);
	A.PushR(2);
	EXPECT_EQ(1, A.PopL());
}

TEST(TDeque, PopL)
{
	TDeque<int> A;
	A.PushL(1);
	A.PushL(2);
	A.PushL(3);
	A.PopL();
	A.PopL();

	EXPECT_EQ(1, A.PopL());
}

TEST(TDeque, PopR)
{
	TDeque<int> A;
	A.PushR(1);
	A.PushR(2);
	A.PushR(3);
	A.PopR();
	A.PopR();

	EXPECT_EQ(1, A.PopR());
}

TEST(TDeque, iterator)
{
	TDeque<int> A;
	A.PushR(1);
	A.PushR(2);
	A.PushR(3);

	EXPECT_EQ(2, A[1]);
}

TEST(TDeque, IsEmpty)
{
	TDeque<int> A;
	EXPECT_EQ(1, A.IsEmpty());
}