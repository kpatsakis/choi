void fun()
{
  char entity_9[24] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_4[43] = "";
  entity_4 = NULL;
  memset(entity_4, 'a', 43-1);
  entity_4[43-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  memset(entity_9, 'y', 24-1);
  entity_9[24-1]='';
  strcpy(entity_7, entity_9);
}