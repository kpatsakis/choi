void fun()
{
  char* entity_9;
  char entity_1[39] = "";
  entity_1 = NULL;
  char entity_4[68] = "";
  entity_4 = NULL;
  memset(entity_4, 'E', 68-1);
  entity_4[68-1]='';
  memset(entity_1, 'z', 39-1);
  entity_1[39-1]='';
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  strcpy(entity_9, entity_4);
}