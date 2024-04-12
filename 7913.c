void fun()
{
  int entity_3 = 51;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'G', entity_3-1);
  entity_7[entity_3-1]='';
  entity_7[95] = 'b';
}