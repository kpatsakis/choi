void fun()
{
  int entity_6 = 83;
  entity_6 = 86;
  char entity_1 = 'd';
  char* entity_9;
  char entity_5[3] = "";
  entity_5 = NULL;
  char* entity_7;
  char* entity_2;
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[29-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[95-1]='';
  memset(entity_5, 'N', 3-1);
  entity_5[3-1]='';
  strcpy(entity_7, entity_5);
}