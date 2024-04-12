void fun()
{
  int entity_0 = 64;
  char* entity_5;
  char* entity_9;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_2 = 'x';
  char* entity_8;
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  memset(entity_6, 'b', entity_0-1);
  entity_6[entity_0-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[66-1]='';
  memcpy(entity_9, entity_6, entity_0*sizeof(char));
}