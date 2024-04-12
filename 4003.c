void fun()
{
  int entity_3 = 4;
  int entity_7 = 92;
  char* entity_9;
  char entity_5[85] = "";
  entity_5 = NULL;
  char entity_6[56] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 56-1);
  entity_6[56-1]='';
  memset(entity_5, 'Y', 85-1);
  entity_5[85-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  strcpy(entity_9, entity_6);
}