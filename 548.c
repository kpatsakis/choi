void fun()
{
  int entity_7 = 100;
  char* entity_4;
  char* entity_6;
  char entity_2[23] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(46*sizeof(char));
  entity_4[46-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_2, 'M', 23-1);
  entity_2[23-1]='';
  memcpy(entity_6, entity_2, 23*sizeof(char));
}