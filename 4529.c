void fun()
{
  int entity_6 = 64;
  char entity_7[80] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', 80-1);
  entity_7[80-1]='';
  entity_7[entity_6] = 'N';
}