void fun()
{
  int entity_2 = 41;
  char entity_8[36] = "";
  entity_8 = NULL;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_8, 'b', 36-1);
  entity_8[36-1]='';
  memset(entity_1, 'p', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[56] = 'Y';
}