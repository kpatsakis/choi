void fun()
{
  int entity_7 = 60;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'O', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[55] = 'E';
}