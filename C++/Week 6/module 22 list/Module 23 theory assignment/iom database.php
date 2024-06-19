class User {
    private $roll;
    private $phone;
    private $email;
    private $name;
    private $blood;
    private $address;
    private $gender;
    private $course;

    public function __construct($roll, $phone, $email) {
        $this->roll = $roll;
        $this->phone = $phone;
        $this->email = $email;
    }

    public function getroll() {
        return $this->roll;
    }

    public function getphone() {
        return $this->phone;
    }

    public function getEmail() {
        return $this->email;
    }

    public function setphone($phone) {
        $this->phone = $phone;
    }

    public function setEmail($email) {
        $this->email = $email;
    }
}

// Creating an instance of User
$roll = new roll(1, 016123456789, 'john@example.com');

// Accessing properties and methods
echo $user->getroll(); // Output: 1
echo $user->getphone(); // Output: 01665899874
echo $user->getEmail(); // Output: john@example.com

$user->setUsername('jane_doe');
echo $user->getUsername(); // Output: jane_doe