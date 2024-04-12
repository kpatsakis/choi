void fun()
{
  int entity_8 = 34;
  char entity_9 = 'D';
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'f', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[30] = 'a';
}