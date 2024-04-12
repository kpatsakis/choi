void fun()
{
  char* entity_1;
  char* entity_9;
  char entity_2 = 'm';
  char entity_5[19] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  memset(entity_5, 'N', 19-1);
  entity_5[19-1]='';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memcpy(entity_1, entity_5, 19*sizeof(char));
}