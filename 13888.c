void fun()
{
  int entity_8 = 25;
  char* entity_6;
  char entity_3[51] = "";
  char entity_5[3] = "";
  char* entity_9;
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'U', 51-1);
  entity_3[51-1]='0';
  memset(entity_5, 'o', 3-1);
  entity_5[3-1]='0';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  entity_8 = 89;
  memcpy(entity_6, entity_3, 51*sizeof(char));
}