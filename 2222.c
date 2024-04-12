void fun()
{
  int entity_7 = 37;
  int entity_3 = 13;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'q', entity_3-1);
  entity_6[entity_3-1]='';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  entity_3 = 47;
  entity_6[78] = 'Y';
}