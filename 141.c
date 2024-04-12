void fun()
{
  int entity_5 = 52;
  char entity_7[77] = "";
  entity_7 = NULL;
  char entity_6 = 't';
  memset(entity_7, 'A', 77-1);
  entity_7[77-1]='';
  entity_7[entity_5] = 'o';
}