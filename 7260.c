void fun()
{
  int entity_0 = 30;
  int entity_7 = 14;
  char entity_1[25] = "";
  entity_1 = NULL;
  memset(entity_1, 'k', 25-1);
  entity_1[25-1]='';
  entity_0 = 38;
  entity_1[entity_0] = 'c';
}