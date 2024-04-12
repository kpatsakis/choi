void fun()
{
  int entity_1 = 19;
  entity_1 = 31;
  char entity_3[55] = "";
  entity_3 = NULL;
  memset(entity_3, 'F', 55-1);
  entity_3[55-1]='';
  entity_3[entity_1] = 'V';
}