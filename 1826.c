void fun()
{
  int entity_2 = 46;
  entity_2 = 30;
  char entity_5[57] = "";
  entity_5 = NULL;
  char entity_7 = 'P';
  char entity_4[16] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', 16-1);
  entity_4[16-1]='';
  memset(entity_5, 'O', 57-1);
  entity_5[57-1]='';
  entity_5[entity_2] = 'S';
}