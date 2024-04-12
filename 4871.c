void fun()
{
  int entity_1 = 3;
  char entity_2[23] = "";
  entity_2 = NULL;
  char* entity_0;
  char entity_7[60] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_0 = (char*)malloc(38*sizeof(char));
  entity_0[38-1]='';
  memset(entity_2, 'v', 23-1);
  entity_2[23-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_7, 'v', 60-1);
  entity_7[60-1]='';
  memcpy(entity_5, entity_7, 60*sizeof(char));
}