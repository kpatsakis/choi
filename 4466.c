void fun()
{
  char entity_5[40] = "";
  entity_5 = NULL;
  char entity_9[20] = "";
  entity_9 = NULL;
  char entity_4[61] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_9, 'm', 20-1);
  entity_9[20-1]='';
  memset(entity_4, 'G', 61-1);
  entity_4[61-1]='';
  memset(entity_5, 'A', 40-1);
  entity_5[40-1]='';
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[1-1]='';
  memcpy(entity_3, entity_5, 40*sizeof(char));
}