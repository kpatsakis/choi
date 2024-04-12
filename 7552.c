void fun()
{
  int entity_3 = 25;
  char entity_8[3] = "";
  entity_8 = NULL;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_8, 'C', 3-1);
  entity_8[3-1]='';
  memset(entity_1, 'X', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[29] = 'j';
}