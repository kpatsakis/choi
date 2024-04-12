void fun()
{
  int entity_6 = 3;
  char entity_8 = 'b';
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'B', entity_6-1);
  entity_3[entity_6-1]='';
  entity_3[35] = 'Z';
}