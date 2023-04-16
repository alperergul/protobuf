package main

import (
	"fmt"
	pb "go-proto/proto"

	"google.golang.org/protobuf/proto"
)

// doSimple Simple mesajını yaratarak geri döner.
func doSimple() *pb.Simple {
	return &pb.Simple{
		Id:          42,
		IsSimple:    true,
		Name:        "A name",
		SampleLists: []int32{1, 2, 3, 4, 5, 6},
	}
}

// doComplex Complex mesajını yaratarak geri döner.
func doComplex() *pb.Complex {
	return &pb.Complex{
		OneDummy: &pb.Dummy{
			Id: 42, Name: "My name",
		},
		MultipleDummies: []*pb.Dummy{
			{Id: 43, Name: "My name 2"},
			{Id: 44, Name: "My name 3"},
		},
	}
}

// doEnumarations Enumarations mesajını yaratarak geri döner.
func doEnumarations() *pb.Enumarations {
	return &pb.Enumarations{
		EyeColor: *pb.EyeColor_EYE_COLOR_BLUE.Enum(),
		// EyeColor: 1,
	}
}

func doOneOf(message interface{}) {

	switch x := message.(type) {
	case *pb.Result_Id:
		fmt.Println(message.(*pb.Result_Id).Id)
	case *pb.Result_Message:
		fmt.Println(message.(*pb.Result_Message).Message)
	default:
		fmt.Errorf("message has unexpected type: %v", x)
	}

}

func doMap() *pb.MapExample {
	return &pb.MapExample{
		Ids: map[string]*pb.IdWrapper{
			"myId":  {Id: 42},
			"myId2": {Id: 43},
			"myId3": {Id: 44},
		},
	}
}

func doFile(p proto.Message) {

	path := "simple.bin"

	writeToFile(path, p)
	message := &pb.Simple{}
	readFromFile(path, message)
	fmt.Println(message)

}

func main() {
	// fmt.Println(doSimple())
	// fmt.Println(doComplex())
	// fmt.Println(doEnumarations())

	// fmt.Println("This should be an Id: ")
	// doOneOf(&pb.Result_Id{Id: 42})
	// fmt.Println("This should be an Message: ")
	// doOneOf(&pb.Result_Message{Message: "a message"})

	// fmt.Println(doMap())
	doFile(doSimple())

}
