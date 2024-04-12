void fun()
{
  int entity_1 = 93;
  char entity_2[8] = "";
  entity_2 = NULL;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_9[3] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[61-1]='';
  entity_3 = (char*)malloc(23*sizeof(char));
  entity_3[23-1]='';
  memset(entity_2, 'O', 8-1);
  entity_2[8-1]='';
  memset(entity_9, 'C', 3-1);
  entity_9[3-1]='';
  memset(entity_6, 'x', entity_1-1);
  entity_6[entity_1-1]='';
  memcpy(entity_3, entity_6, entity_1*sizeof(char));
}