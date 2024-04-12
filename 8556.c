void fun()
{
  int entity_4 = 83;
  int entity_3 = 13;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[77] = 'u';
}