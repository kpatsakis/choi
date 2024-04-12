void fun()
{
  int entity_2 = 62;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_5, 'Q', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 94;
  entity_5[25] = 'Y';
}