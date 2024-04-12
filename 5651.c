void fun()
{
  int entity_5 = 84;
  char entity_3 = 'I';
  char entity_4[23] = "";
  entity_4 = NULL;
  memset(entity_4, 'j', 23-1);
  entity_4[23-1]='';
  entity_4[70] = 'r';
}