void fun()
{
  int entity_4 = 75;
  char entity_3[61] = "";
  entity_3 = NULL;
  char entity_0[86] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'd', 86-1);
  entity_0[86-1]='';
  memset(entity_3, 'b', 61-1);
  entity_3[61-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  entity_4 = 82;
  memcpy(entity_5, entity_3, 61*sizeof(char));
}