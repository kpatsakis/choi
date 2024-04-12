void fun()
{
  int entity_6 = 4;
  int entity_8 = 21;
  char entity_4[21] = "";
  entity_4 = NULL;
  char entity_5[62] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_7;
  memset(entity_4, 'R', 21-1);
  entity_4[21-1]='';
  memset(entity_5, 'q', 62-1);
  entity_5[62-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[65-1]='';
  entity_6 = 29;
  strcpy(entity_7, entity_5);
}