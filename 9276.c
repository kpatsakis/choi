void fun()
{
  int entity_4 = 16;
  entity_4 = 80;
  char entity_9[20] = "";
  entity_9 = NULL;
  char entity_3[13] = "";
  entity_3 = NULL;
  char entity_5[6] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_9, 'C', 20-1);
  entity_9[20-1]='';
  memset(entity_3, 'd', 13-1);
  entity_3[13-1]='';
  memset(entity_5, 'i', 6-1);
  entity_5[6-1]='';
  strcpy(entity_7, entity_9);
}