void fun()
{
  int entity_2 = 33;
  int entity_1 = 91;
  char* entity_7;
  char* entity_8;
  char entity_9[29] = "";
  entity_9 = NULL;
  memset(entity_9, 'M', 29-1);
  entity_9[29-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[46-1]='';
  memcpy(entity_7, entity_9, 29*sizeof(char));
}