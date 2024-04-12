void fun()
{
  int entity_3 = 75;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'O', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[74] = 'h';
}