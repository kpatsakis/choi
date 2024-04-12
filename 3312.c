void fun()
{
  int entity_1 = 11;
  char entity_7 = 'U';
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_2[84] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', 84-1);
  entity_2[84-1]='';
  memset(entity_9, 'K', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[29] = 'h';
}