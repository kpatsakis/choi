void fun()
{
  int entity_3 = 15;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'F', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[35] = 'r';
}