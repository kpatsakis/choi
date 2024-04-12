void fun()
{
  int entity_8 = 24;
  entity_8 = 81;
  char entity_3[42] = "";
  entity_3 = NULL;
  char entity_5 = 'M';
  char entity_2[25] = "";
  entity_2 = NULL;
  memset(entity_2, 'j', 25-1);
  entity_2[25-1]='';
  memset(entity_3, 'M', 42-1);
  entity_3[42-1]='';
  entity_3[entity_8] = 'H';
}