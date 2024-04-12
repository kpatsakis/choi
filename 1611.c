void fun()
{
  int entity_5 = 95;
  char* entity_4;
  char* entity_3;
  char* entity_1;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_6[94] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[80-1]='';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  memset(entity_9, 'A', entity_5-1);
  entity_9[entity_5-1]='';
  memset(entity_6, 'm', 94-1);
  entity_6[94-1]='';
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  strcpy(entity_3, entity_9);
}