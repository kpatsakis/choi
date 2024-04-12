void fun()
{
  int entity_4 = 51;
  int entity_5 = 2;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'z', entity_4-1);
  entity_1[entity_4-1]='';
  entity_1[54] = 'v';
}