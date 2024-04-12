void fun()
{
  int entity_8 = 59;
  char* entity_9;
  char* entity_7;
  char* entity_0;
  char entity_5[95] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_5, 'u', 95-1);
  entity_5[95-1]='';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[25-1]='';
  entity_9 = (char*)malloc(58*sizeof(char));
  entity_9[58-1]='';
  strcpy(entity_3, entity_5);
}