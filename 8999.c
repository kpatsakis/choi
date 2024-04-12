void fun()
{
  int entity_1 = 84;
  int entity_7 = 75;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', entity_1-1);
  entity_3[entity_1-1]='';
  entity_1 = 31;
  entity_3[53] = 'j';
}