void fun()
{
  char entity_1[82] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_0[83] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'T', 83-1);
  entity_0[83-1]='';
  memset(entity_1, 'x', 82-1);
  entity_1[82-1]='';
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  memcpy(entity_9, entity_1, 82*sizeof(char));
}