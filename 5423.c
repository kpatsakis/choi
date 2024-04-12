void fun()
{
  int entity_6 = 6;
  char entity_9[59] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_0[16] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'x', 16-1);
  entity_0[16-1]='';
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[46-1]='';
  memset(entity_9, 'B', 59-1);
  entity_9[59-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  strcpy(entity_7, entity_9);
}