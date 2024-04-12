void fun()
{
  int entity_8 = 18;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 21;
  entity_1[28] = 'M';
}