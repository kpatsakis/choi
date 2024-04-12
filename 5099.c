void fun()
{
  int entity_2 = 54;
  entity_2 = 27;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', entity_2-1);
  entity_3[entity_2-1]='';
  entity_3[61] = 'Z';
}