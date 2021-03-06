use super::*;

#[derive(Clone)]
pub struct Animated {
    id: String,
    objects: Vec<Object>,
    i: i32,
    frame_count: brownfox::FrameCount<i32>,
}

pub fn new(id: String, i: i32, objects: Vec<Object>) -> Animated {
    Animated {
        id: id,
        objects: objects,
        i: i,
        frame_count: brownfox::FrameCount::new(0),
    }
}

impl brownfox::Moore<Input, Output> for Animated {
    fn transit(&self, input: &Input) -> Animated {
        let mut other = self.clone();
        other.objects = other.objects.transit(input);
        other.frame_count = (0..60 / input.previous.fps)
            .fold(self.frame_count.clone(), |control, _| control.transit(&()));
        other
    }

    fn output(&self) -> Output {
        self.objects[(self.frame_count.output() / self.i % self.objects.len() as i32) as usize]
            .output()
    }
}

impl Animated {
    pub fn id(&self) -> String {
        self.id.clone()
    }

    pub fn x(&self) -> i32 {
        self.objects[(self.frame_count.output() / self.i % self.objects.len() as i32) as usize].x()
    }

    pub fn y(&self) -> i32 {
        self.objects[(self.frame_count.output() / self.i % self.objects.len() as i32) as usize].y()
    }
    pub fn z(&self) -> i32 {
        self.objects[(self.frame_count.output() / self.i % self.objects.len() as i32) as usize].z()
    }

    pub fn on(&self, event: &Event) -> Animated {
        let mut other = self.clone();
        other.objects = other
            .objects
            .iter()
            .map(|object| object.on(event))
            .collect();
        other
    }

    pub fn transport(&self, from_x: i32, from_y: i32, to_x: i32, to_y: i32) -> Animated {
        let mut other = self.clone();
        other.objects = other
            .objects
            .iter()
            .map(|object| object.transport(from_x, from_y, to_x, to_y))
            .collect();
        other
    }
}
