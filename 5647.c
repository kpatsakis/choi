void fun()
{
  int entity_7 = 22;
  char entity_8[36] = "";
  entity_8 = NULL;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'O', entity_7-1);
  entity_3[entity_7-1]='';
  memset(entity_8, 'J', 36-1);
  entity_8[36-1]='';
  entity_3[1] = 'r';
}