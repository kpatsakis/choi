void fun()
{
  int entity_9 = 73;
  char entity_7[53] = "";
  entity_7 = NULL;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_7, 'u', 53-1);
  entity_7[53-1]='';
  memset(entity_4, 'h', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 11;
  entity_4[11] = 'y';
}