void fun()
{
  char* entity_7;
  char* entity_1;
  char entity_5 = 'm';
  char entity_3[44] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[39-1]='';
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[88-1]='';
  memset(entity_3, 'Y', 44-1);
  entity_3[44-1]='';
  strcpy(entity_1, entity_3);
}