void fun()
{
  int entity_1 = 95;
  char entity_6[38] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', 38-1);
  entity_6[38-1]='';
  entity_6[entity_1] = 'r';
}