void fun()
{
  int entity_3 = 58;
  char* entity_6;
  char* entity_2;
  char* entity_0;
  char entity_9[14] = "";
  entity_9 = NULL;
  char entity_1[15] = "";
  entity_1 = NULL;
  memset(entity_9, 'b', 14-1);
  entity_9[14-1]='';
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[60-1]='';
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[88-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_1, 'j', 15-1);
  entity_1[15-1]='';
  entity_3 = 49;
  memcpy(entity_0, entity_9, 14*sizeof(char));
}