void fun()
{
  int entity_9 = 4;
  char entity_7[29] = "";
  entity_7 = NULL;
  char entity_0[30] = "";
  entity_0 = NULL;
  memset(entity_7, 's', 29-1);
  entity_7[29-1]='';
  memset(entity_0, 'Q', 30-1);
  entity_0[30-1]='';
  entity_0[entity_9] = 'r';
}