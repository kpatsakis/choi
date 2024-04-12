void fun()
{
  int entity_2 = 87;
  int entity_4 = 62;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'g', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[9] = 'p';
}