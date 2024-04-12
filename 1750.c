void fun()
{
  int entity_8 = 18;
  char entity_4[38] = "";
  entity_4 = NULL;
  memset(entity_4, 'F', 38-1);
  entity_4[38-1]='';
  entity_4[entity_8] = 'q';
}