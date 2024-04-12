void fun()
{
  int entity_8 = 62;
  char entity_1[10] = "";
  entity_1 = NULL;
  memset(entity_1, 'g', 10-1);
  entity_1[10-1]='';
  entity_1[entity_8] = 'd';
}