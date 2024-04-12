void fun()
{
  int entity_6 = 54;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'P', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[9] = 'a';
}