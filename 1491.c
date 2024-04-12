void fun()
{
  char entity_0 = 'B';
  char* entity_7;
  char entity_4[36] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  memset(entity_4, 'd', 36-1);
  entity_4[36-1]='';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  strcpy(entity_7, entity_4);
}