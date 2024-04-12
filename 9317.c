void fun()
{
  int entity_4 = 29;
  char entity_2[70] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 70-1);
  entity_2[70-1]='';
  entity_2[entity_4] = 't';
}