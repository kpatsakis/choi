void fun()
{
  int entity_6 = 72;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[23] = 'a';
}