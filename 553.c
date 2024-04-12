void fun()
{
  int entity_0 = 100;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char entity_3[43] = "";
  entity_3 = NULL;
  memset(entity_3, 'g', 43-1);
  entity_3[43-1]='';
  memset(entity_1, 'u', entity_0-1);
  entity_1[entity_0-1]='';
  entity_1[19] = 'v';
}