void fun()
{
  int entity_2 = 71;
  int entity_5 = 14;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_0[78] = "";
  entity_0 = NULL;
  memset(entity_0, 'e', 78-1);
  entity_0[78-1]='';
  memset(entity_3, 'r', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[54] = 'I';
}