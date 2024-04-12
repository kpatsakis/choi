void fun()
{
  int entity_9 = 17;
  int entity_8 = 91;
  entity_8 = 24;
  char* entity_4;
  char* entity_3;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(60*sizeof(char));
  entity_1[60-1]='';
  memset(entity_2, 'X', entity_8-1);
  entity_2[entity_8-1]='';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  memcpy(entity_4, entity_2, entity_8*sizeof(char));
}