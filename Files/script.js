document.getElementById('registrationForm').addEventListener('submit', function(event) {
    event.preventDefault();

    const username = document.getElementById('username').value;
    const email = document.getElementById('email').value;
    const password = document.getElementById('password').value;
    const confirmPassword = document.getElementById('confirmPassword').value;
    const messageDiv = document.getElementById('message');

    // Reset message
    messageDiv.textContent = '';

    // Validation checks
    if (username.length < 3) {
        messageDiv.textContent = 'Username must be at least 3 characters long.';
        return;
    }

    if (!validateEmail(email)) {
        messageDiv.textContent = 'Please enter a valid email address.';
        return;
    }

    if (password.length < 6) {
        messageDiv.textContent = 'Password must be at least 6 characters long.';
        return;
    }

    if (password !== confirmPassword) {
        messageDiv.textContent = 'Passwords do not match.';
        return;
    }

    // If all validations pass
    messageDiv.textContent = 'Registration successful!';
});

function validateEmail(email) {
    const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    return regex.test(email);
}
