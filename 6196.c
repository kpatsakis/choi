void fun()
{
  int entity_0 = 93;
  char entity_4[23] = "";
  entity_4 = NULL;
  char entity_9[9] = "";
  entity_9 = NULL;
  char entity_1 = 'I';
  memset(entity_9, 'Q', 9-1);
  entity_9[9-1]='';
  memset(entity_4, 'E', 23-1);
  entity_4[23-1]='';
  entity_4[entity_0] = 's';
}