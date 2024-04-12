void fun()
{
  int entity_4 = 9;
  int entity_1 = 23;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'a', entity_4-1);
  entity_3[entity_4-1]='';
  entity_4 = 41;
  entity_3[41] = 'I';
}