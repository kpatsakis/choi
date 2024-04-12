void fun()
{
  int entity_7 = 66;
  entity_7 = 38;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[74] = 'D';
}