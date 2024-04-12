void fun()
{
  int entity_6 = 13;
  entity_6 = 30;
  char* entity_7;
  char entity_4[7] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_9;
  char entity_2[40] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', 40-1);
  entity_2[40-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  memset(entity_4, 'd', 7-1);
  entity_4[7-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  entity_3 = (char*)malloc(90*sizeof(char));
  entity_3[90-1]='';
  strcpy(entity_9, entity_4);
}