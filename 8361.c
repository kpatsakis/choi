void fun()
{
  int entity_6 = 37;
  char entity_9[60] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_3[44] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  memset(entity_3, 'o', 44-1);
  entity_3[44-1]='';
  memset(entity_9, 'T', 60-1);
  entity_9[60-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  strcpy(entity_7, entity_9);
}