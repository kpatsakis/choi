void fun()
{
  int entity_5 = 16;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_1 = 'i';
  memset(entity_3, 'S', entity_5-1);
  entity_3[entity_5-1]='';
  entity_5 = 54;
  entity_3[98] = 'S';
}