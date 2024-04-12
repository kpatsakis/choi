void fun()
{
  int entity_0 = 10;
  int entity_3 = 71;
  char entity_1[24] = "";
  entity_1 = NULL;
  char entity_9[61] = "";
  entity_9 = NULL;
  memset(entity_9, 'I', 61-1);
  entity_9[61-1]='';
  memset(entity_1, 'W', 24-1);
  entity_1[24-1]='';
  entity_9[entity_3] = 'H';
}