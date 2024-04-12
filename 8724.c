void fun()
{
  int entity_1 = 9;
  char entity_9[24] = "";
  entity_9 = NULL;
  char entity_5 = 'C';
  memset(entity_9, 'D', 24-1);
  entity_9[24-1]='';
  entity_1 = 3;
  entity_9[entity_1] = 'p';
}