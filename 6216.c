void fun()
{
  int entity_4 = 80;
  entity_4 = 54;
  char entity_7[3] = "";
  entity_7 = NULL;
  memset(entity_7, 'p', 3-1);
  entity_7[3-1]='';
  entity_7[entity_4] = 'T';
}