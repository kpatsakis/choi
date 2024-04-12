void fun()
{
  int entity_2 = 42;
  entity_2 = 66;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'k', entity_2-1);
  entity_3[entity_2-1]='';
  entity_3[68] = 'F';
}