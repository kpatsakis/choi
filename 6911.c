void fun()
{
  int entity_7 = 66;
  entity_7 = 36;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'R', entity_7-1);
  entity_5[entity_7-1]='';
  entity_5[79] = 'N';
}