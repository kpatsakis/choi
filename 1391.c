void fun()
{
  int entity_0 = 10;
  int entity_4 = 36;
  char entity_3[17] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_1;
  char* entity_7;
  memset(entity_3, 'T', 17-1);
  entity_3[17-1]='';
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  entity_0 = 81;
  strcpy(entity_1, entity_3);
}