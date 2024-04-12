void fun()
{
  int entity_5 = 67;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'R', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[3] = 'i';
}