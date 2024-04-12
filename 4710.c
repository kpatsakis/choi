void fun()
{
  int entity_8 = 59;
  int entity_1 = 35;
  char entity_3 = 'K';
  char entity_6[57] = "";
  entity_6 = NULL;
  memset(entity_6, 'l', 57-1);
  entity_6[57-1]='';
  entity_6[entity_8] = 't';
}