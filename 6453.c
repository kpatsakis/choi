void fun()
{
  int entity_1 = 95;
  char entity_2[22] = "";
  entity_2 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_2, 'M', 22-1);
  entity_2[22-1]='';
  memset(entity_0, 'd', entity_1-1);
  entity_0[entity_1-1]='';
  entity_0[13] = 'p';
}