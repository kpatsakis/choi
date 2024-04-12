void fun()
{
  int entity_7 = 31;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char entity_1[16] = "";
  entity_1 = NULL;
  memset(entity_4, 'L', entity_7-1);
  entity_4[entity_7-1]='';
  memset(entity_1, 'Q', 16-1);
  entity_1[16-1]='';
  entity_4[40] = 'Y';
}