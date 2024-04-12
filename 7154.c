void fun()
{
  int entity_1 = 81;
  int entity_4 = 20;
  entity_4 = 22;
  char entity_2[2] = "";
  entity_2 = NULL;
  char entity_3[59] = "";
  entity_3 = NULL;
  memset(entity_2, 'j', 2-1);
  entity_2[2-1]='';
  memset(entity_3, 'P', 59-1);
  entity_3[59-1]='';
  entity_2[entity_4] = 'K';
}