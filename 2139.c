void fun()
{
  int entity_4 = 18;
  char entity_1[80] = "";
  entity_1 = NULL;
  memset(entity_1, 'r', 80-1);
  entity_1[80-1]='';
  entity_1[entity_4] = 'E';
}