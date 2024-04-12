void fun()
{
  int entity_1 = 59;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_2 = 'U';
  memset(entity_6, 'O', entity_1-1);
  entity_6[entity_1-1]='';
  entity_1 = 26;
  entity_6[4] = 'f';
}