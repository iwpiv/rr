/* -*- Mode: C; tab-width: 8; c-basic-offset: 8; indent-tabs-mode: t; -*- */

int main(int argc, char *argv[]) {
	*((volatile int*)0) = 0;
	return 0;
}