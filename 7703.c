void fun()
{
  int entity_1 = 20;
  char entity_9[1] = "";
  entity_9 = NULL;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char entity_7 = 'o';
  memset(entity_4, 'L', entity_1-1);
  entity_4[entity_1-1]='';
  memset(entity_9, 'c', 1-1);
  entity_9[1-1]='';
  entity_1 = 65;
  entity_4[87] = 'w';
}