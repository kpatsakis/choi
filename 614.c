void fun()
{
  int entity_6 = 58;
  int entity_4 = 3;
  char entity_1[30] = "";
  entity_1 = NULL;
  char entity_3[43] = "";
  entity_3 = NULL;
  memset(entity_1, 'f', 30-1);
  entity_1[30-1]='';
  memset(entity_3, 'u', 43-1);
  entity_3[43-1]='';
  entity_1[entity_6] = 'v';
}