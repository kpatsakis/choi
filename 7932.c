void fun()
{
  int entity_1 = 8;
  int entity_5 = 19;
  int entity_9 = 79;
  char entity_2[39] = "";
  entity_2 = NULL;
  memset(entity_2, 'P', 39-1);
  entity_2[39-1]='';
  entity_2[entity_5] = 'Y';
}