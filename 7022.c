void fun()
{
  int entity_3 = 21;
  char entity_1[24] = "";
  entity_1 = NULL;
  memset(entity_1, 'B', 24-1);
  entity_1[24-1]='';
  entity_1[entity_3] = 'd';
}