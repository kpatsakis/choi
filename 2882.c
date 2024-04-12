void fun()
{
  int entity_4 = 42;
  int entity_9 = 29;
  char entity_0[38] = "";
  entity_0 = NULL;
  char entity_5[0] = "";
  entity_5 = NULL;
  memset(entity_0, 'O', 38-1);
  entity_0[38-1]='';
  memset(entity_5, 'Y', 0-1);
  entity_5[0-1]='';
  entity_0[entity_4] = 'O';
}