pub mod npc;
pub mod drone;
pub mod maptip;
pub mod teiri;

use super::*;

pub type Input = (Vec<brownfox::Input>, Hijack);
pub type Output = (Vec<Event>, Vec<View>);

#[derive(Clone)]
pub enum Object {
    Teiri(teiri::Teiri),
    NPC(npc::NPC),
    Drone(drone::Drone),
    Maptip(maptip::Maptip),
}

impl brownfox::Moore<Input, Output> for Object {
    fn transit(&self, input: &Input) -> Object {
        match self {
            Object::Teiri(teiri) => Object::Teiri(teiri.transit(input)),
            Object::NPC(npc) => Object::NPC(npc.transit(input)),
            Object::Drone(drone) => Object::Drone(drone.transit(input)),
            Object::Maptip(maptip) => Object::Maptip(maptip.transit(input)),
        }
    }

    fn output(&self) -> Output {
        match self {
            Object::Teiri(teiri) => teiri.output(),
            Object::NPC(npc) => npc.output(),
            Object::Drone(drone) => drone.output(),
            Object::Maptip(maptip) => maptip.output(),
        }
    }
}
