void fun()
{
  int entity_2 = 48;
  int entity_6 = 83;
  char entity_1[89] = "";
  entity_1 = NULL;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', entity_2-1);
  entity_9[entity_2-1]='';
  memset(entity_1, 'x', 89-1);
  entity_1[89-1]='';
  entity_9[88] = 'r';
}