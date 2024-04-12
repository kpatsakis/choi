void fun()
{
  int entity_3 = 67;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char entity_7[54] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', 54-1);
  entity_7[54-1]='';
  memset(entity_0, 'Y', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 93;
  entity_0[92] = 'S';
}