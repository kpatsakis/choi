void fun()
{
  int entity_8 = 11;
  int entity_2 = 88;
  char entity_0[66] = "";
  entity_0 = NULL;
  char entity_6[83] = "";
  entity_6 = NULL;
  memset(entity_6, 'Y', 83-1);
  entity_6[83-1]='';
  memset(entity_0, 'c', 66-1);
  entity_0[66-1]='';
  entity_6[entity_8] = 'U';
}