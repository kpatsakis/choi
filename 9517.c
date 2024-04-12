void fun()
{
  int entity_4 = 70;
  char entity_7[77] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', 77-1);
  entity_7[77-1]='';
  entity_7[entity_4] = 'd';
}