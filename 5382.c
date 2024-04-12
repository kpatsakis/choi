void fun()
{
  int entity_5 = 47;
  char* entity_6;
  char* entity_4;
  char* entity_7;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  entity_0 = (char*)malloc(18*sizeof(char));
  entity_0[18-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[8-1]='';
  memset(entity_9, 'd', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 79;
  memcpy(entity_7, entity_9, entity_5*sizeof(char));
}