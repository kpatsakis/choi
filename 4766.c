void fun()
{
  int entity_4 = 14;
  int entity_5 = 52;
  entity_4 = 83;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[80] = 'i';
}