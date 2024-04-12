void fun()
{
  int entity_8 = 94;
  entity_8 = 98;
  char entity_7 = 'M';
  char entity_6 = 'I';
  char entity_3 = 'j';
  char entity_5[75] = "";
  entity_5 = NULL;
  memset(entity_5, 'U', 75-1);
  entity_5[75-1]='';
  entity_5[entity_8] = 'D';
}