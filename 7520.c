void fun()
{
  int entity_2 = 53;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'V', entity_2-1);
  entity_6[entity_2-1]='';
  entity_2 = 70;
  entity_6[73] = 'Y';
}