void fun()
{
  int entity_8 = 98;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'A', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 54;
  entity_1[94] = 'B';
}