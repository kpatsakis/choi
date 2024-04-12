void fun()
{
  int entity_7 = 8;
  char entity_4 = 's';
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[50] = 'G';
}