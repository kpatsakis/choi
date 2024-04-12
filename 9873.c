void fun()
{
  int entity_0 = 66;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', entity_0-1);
  entity_2[entity_0-1]='';
  entity_2[68] = 'M';
}