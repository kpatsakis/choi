void fun()
{
  int entity_1 = 73;
  entity_1 = 2;
  char entity_5[60] = "";
  entity_5 = NULL;
  char entity_4[82] = "";
  entity_4 = NULL;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_5, 'w', 60-1);
  entity_5[60-1]='';
  memset(entity_9, 'r', entity_1-1);
  entity_9[entity_1-1]='';
  memset(entity_4, 'A', 82-1);
  entity_4[82-1]='';
  entity_9[99] = 'A';
}