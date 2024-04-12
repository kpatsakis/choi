void fun()
{
  int entity_4 = 71;
  entity_4 = 9;
  char entity_3[32] = "";
  entity_3 = NULL;
  char* entity_2;
  char entity_8 = 'K';
  char* entity_7;
  memset(entity_3, 'f', 32-1);
  entity_3[32-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[46-1]='';
  memcpy(entity_7, entity_3, 32*sizeof(char));
}