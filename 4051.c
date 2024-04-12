void fun()
{
  int entity_3 = 55;
  entity_3 = 84;
  char* entity_7;
  char* entity_6;
  char* entity_5;
  char* entity_8;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'T', entity_3-1);
  entity_0[entity_3-1]='';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[77-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[60-1]='';
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[37-1]='';
  memcpy(entity_8, entity_0, entity_3*sizeof(char));
}