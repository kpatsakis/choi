void fun()
{
  int entity_6 = 43;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_5 = 'n';
  memset(entity_3, 'p', entity_6-1);
  entity_3[entity_6-1]='';
  entity_3[20] = 'V';
}