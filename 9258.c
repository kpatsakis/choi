void fun()
{
  int entity_8 = 1;
  entity_8 = 97;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_6[44] = "";
  entity_6 = NULL;
  char entity_2 = 'w';
  memset(entity_6, 'b', 44-1);
  entity_6[44-1]='';
  memset(entity_4, 'F', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[86] = 'o';
}