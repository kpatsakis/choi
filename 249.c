void fun()
{
  int entity_4 = 39;
  entity_4 = 86;
  char entity_7[16] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', 16-1);
  entity_7[16-1]='';
  entity_7[entity_4] = 'T';
}