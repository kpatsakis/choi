void fun()
{
  int entity_1 = 1;
  char* entity_0;
  char* entity_6;
  char* entity_8;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_5[41] = "";
  entity_5 = NULL;
  memset(entity_2, 'O', entity_1-1);
  entity_2[entity_1-1]='';
  memset(entity_5, 'd', 41-1);
  entity_5[41-1]='';
  entity_8 = (char*)malloc(23*sizeof(char));
  entity_8[23-1]='';
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[79-1]='';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  memcpy(entity_8, entity_2, entity_1*sizeof(char));
}