void fun()
{
  int entity_7 = 61;
  char entity_4[71] = "";
  entity_4 = NULL;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_4, 's', 71-1);
  entity_4[71-1]='';
  memset(entity_1, 'A', entity_7-1);
  entity_1[entity_7-1]='';
  entity_1[54] = 'n';
}