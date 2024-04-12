void fun()
{
  int entity_3 = 56;
  char* entity_2;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_1;
  char entity_9[8] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', 8-1);
  entity_9[8-1]='';
  memset(entity_6, 'V', entity_3-1);
  entity_6[entity_3-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  entity_3 = 18;
  memcpy(entity_1, entity_6, entity_3*sizeof(char));
}