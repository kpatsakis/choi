void fun()
{
  int entity_7 = 90;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_8[52] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[95-1]='';
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[12-1]='';
  memset(entity_3, 'K', entity_7-1);
  entity_3[entity_7-1]='';
  memset(entity_8, 'O', 52-1);
  entity_8[52-1]='';
  entity_7 = 27;
  strcpy(entity_6, entity_3);
}