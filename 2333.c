void fun()
{
  int entity_7 = 72;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'e', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[10] = 'I';
}