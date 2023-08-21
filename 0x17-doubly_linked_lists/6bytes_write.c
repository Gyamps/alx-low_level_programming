#include <stdio.h>

int main() {
	size_t bytes_written;

	/* Data to write (6 bytes) */
	char data[7] = "906609";
    
	/* Open the file in binary write mode */
	FILE *file = fopen("102-result", "wb");

	if (file == NULL) {
        	perror("Error opening the file");
        	return 1;
    	}

    	/* Write the data to the file */
    	bytes_written = fwrite(data, 1, sizeof(data) - 1, file);

    	if (bytes_written != sizeof(data) - 1) {
        	perror("Error writing to the file");
        	fclose(file);
        	return 1;
    	}

    	/* Close the file */
    	fclose(file);

    	printf("Data written successfully.\n");

    	return 0;
}

