void fun()
{
  int entity_7 = 49;
  entity_7 = 98;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'T', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[56] = 'B';
}