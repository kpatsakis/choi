void fun()
{
  int entity_8 = 10;
  int entity_6 = 27;
  entity_6 = 74;
  char entity_0[66] = "";
  entity_0 = NULL;
  char entity_2[55] = "";
  entity_2 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_2, 'K', 55-1);
  entity_2[55-1]='';
  memset(entity_0, 'E', 66-1);
  entity_0[66-1]='';
  memset(entity_1, 'l', entity_6-1);
  entity_1[entity_6-1]='';
  entity_1[42] = 'H';
}