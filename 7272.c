void fun()
{
  int entity_2 = 40;
  int entity_1 = 92;
  entity_1 = 54;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char entity_0[27] = "";
  entity_0 = NULL;
  memset(entity_0, 'K', 27-1);
  entity_0[27-1]='';
  memset(entity_7, 'G', entity_1-1);
  entity_7[entity_1-1]='';
  entity_7[98] = 'S';
}