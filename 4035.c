void fun()
{
  int entity_5 = 27;
  entity_5 = 33;
  char entity_6[64] = "";
  entity_6 = NULL;
  char entity_2[55] = "";
  entity_2 = NULL;
  char entity_8[66] = "";
  entity_8 = NULL;
  memset(entity_2, 'y', 55-1);
  entity_2[55-1]='';
  memset(entity_8, 'R', 66-1);
  entity_8[66-1]='';
  memset(entity_6, 'x', 64-1);
  entity_6[64-1]='';
  entity_2[entity_5] = 'y';
}