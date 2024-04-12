void fun()
{
  int entity_7 = 13;
  entity_7 = 87;
  char entity_2[30] = "";
  entity_2 = NULL;
  memset(entity_2, 'z', 30-1);
  entity_2[30-1]='';
  entity_2[entity_7] = 'b';
}