void fun()
{
  char entity_1[19] = "";
  entity_1 = NULL;
  char entity_9[47] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_1, 'v', 19-1);
  entity_1[19-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  memset(entity_9, 'R', 47-1);
  entity_9[47-1]='';
  memcpy(entity_4, entity_1, 19*sizeof(char));
}