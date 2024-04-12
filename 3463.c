void fun()
{
  int entity_4 = 52;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_5, 'Q', entity_4-1);
  entity_5[entity_4-1]='';
  entity_4 = 83;
  entity_5[49] = 'a';
}