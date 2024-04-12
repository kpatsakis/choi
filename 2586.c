void fun()
{
  int entity_1 = 23;
  char entity_5[53] = "";
  entity_5 = NULL;
  char entity_3[40] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_5, 'G', 53-1);
  entity_5[53-1]='';
  memset(entity_3, 'd', 40-1);
  entity_3[40-1]='';
  strcpy(entity_7, entity_5);
}