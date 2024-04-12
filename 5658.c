void fun()
{
  int entity_0 = 98;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char entity_4[32] = "";
  entity_4 = NULL;
  memset(entity_4, 'L', 32-1);
  entity_4[32-1]='';
  memset(entity_1, 'o', entity_0-1);
  entity_1[entity_0-1]='';
  entity_1[18] = 'H';
}