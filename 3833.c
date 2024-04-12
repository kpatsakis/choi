void fun()
{
  int entity_2 = 52;
  char entity_7[44] = "";
  entity_7 = NULL;
  memset(entity_7, 'U', 44-1);
  entity_7[44-1]='';
  entity_7[entity_2] = 'N';
}