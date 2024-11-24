/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:25:01 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/24 17:25:35 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    // Declare a file descriptor
    int fd;

    // Open the file in read-only mode
    fd = open("mynew.txt", O_RDONLY);
    
    // Check if the file was opened successfully
    if (fd == -1) {
        perror("Error opening file");
        return 1; // Return an error code if file cannot be opened
    }

    // Declare a buffer to hold the data read from the file
    char buffer[1024];
    ssize_t bytesRead;

    // Read from the file and write the content to the screen
    while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0) {
        // Write the content to the standard output (screen)
        write(STDOUT_FILENO, buffer, bytesRead);
    }

    // Check for errors during reading
    if (bytesRead == -1) {
        perror("Error reading file");
        close(fd);
        return 1;
    }

    // Close the file after reading
    close(fd);

    return 0;
}

