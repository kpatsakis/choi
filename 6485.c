void fun()
{
  int entity_4 = 52;
  entity_4 = 9;
  char* entity_5;
  char entity_2[90] = "";
  entity_2 = NULL;
  char entity_3[96] = "";
  entity_3 = NULL;
  memset(entity_2, 'i', 90-1);
  entity_2[90-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_3, 'l', 96-1);
  entity_3[96-1]='';
  memcpy(entity_5, entity_3, 96*sizeof(char));
}