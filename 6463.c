void fun()
{
  int entity_8 = 63;
  entity_8 = 8;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'o', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[53] = 'd';
}