void fun()
{
  char entity_2[38] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_9[52] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(41*sizeof(char));
  entity_4[41-1]='';
  memset(entity_9, 'y', 52-1);
  entity_9[52-1]='';
  memset(entity_2, 'R', 38-1);
  entity_2[38-1]='';
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[49-1]='';
  strcpy(entity_1, entity_2);
}