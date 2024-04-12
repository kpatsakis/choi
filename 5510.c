void fun()
{
  int entity_2 = 30;
  char entity_1[38] = "";
  entity_1 = NULL;
  char entity_0[39] = "";
  entity_0 = NULL;
  memset(entity_0, 'l', 39-1);
  entity_0[39-1]='';
  memset(entity_1, 'h', 38-1);
  entity_1[38-1]='';
  entity_0[entity_2] = 'l';
}