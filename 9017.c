void fun()
{
  int entity_1 = 6;
  int entity_5 = 22;
  entity_1 = 44;
  char entity_4[71] = "";
  entity_4 = NULL;
  char entity_7[10] = "";
  entity_7 = NULL;
  char* entity_6;
  char* entity_9;
  memset(entity_7, 'K', 10-1);
  entity_7[10-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_9 = (char*)malloc(61*sizeof(char));
  entity_9[61-1]='';
  memset(entity_4, 'q', 71-1);
  entity_4[71-1]='';
  strcpy(entity_6, entity_4);
}