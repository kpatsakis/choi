void fun()
{
  int entity_7 = 90;
  char entity_3[55] = "";
  entity_3 = NULL;
  memset(entity_3, 'q', 55-1);
  entity_3[55-1]='';
  entity_7 = 27;
  entity_3[entity_7] = 'y';
}