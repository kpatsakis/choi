void fun()
{
  int entity_5 = 52;
  char entity_1[80] = "";
  entity_1 = NULL;
  memset(entity_1, 'X', 80-1);
  entity_1[80-1]='';
  entity_1[entity_5] = 'W';
}