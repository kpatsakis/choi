void fun()
{
  int entity_4 = 49;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[13] = 'C';
}