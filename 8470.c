void fun()
{
  int entity_4 = 18;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'V', entity_4-1);
  entity_3[entity_4-1]='';
  entity_4 = 57;
  entity_3[33] = 'R';
}