void fun()
{
  int entity_8 = 54;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'o', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[24] = 'g';
}