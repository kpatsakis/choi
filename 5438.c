void fun()
{
  int entity_7 = 68;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_6[66] = "";
  entity_6 = NULL;
  memset(entity_8, 'C', entity_7-1);
  entity_8[entity_7-1]='';
  memset(entity_6, 'C', 66-1);
  entity_6[66-1]='';
  entity_8[83] = 'j';
}