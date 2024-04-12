void fun()
{
  int entity_5 = 22;
  int entity_1 = 3;
  char entity_9[75] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', 75-1);
  entity_9[75-1]='';
  entity_1 = 75;
  entity_9[entity_1] = 'k';
}