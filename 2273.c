void fun()
{
  char* entity_0;
  char* entity_4;
  char entity_7[30] = "";
  entity_7 = NULL;
  char entity_1[13] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', 13-1);
  entity_1[13-1]='';
  memset(entity_7, 'b', 30-1);
  entity_7[30-1]='';
  entity_0 = (char*)malloc(0*sizeof(char));
  entity_0[0-1]='';
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  memcpy(entity_4, entity_7, 30*sizeof(char));
}