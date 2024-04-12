void fun()
{
  int entity_0 = 26;
  char* entity_8;
  char* entity_3;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'p', entity_0-1);
  entity_9[entity_0-1]='';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  memcpy(entity_6, entity_9, entity_0*sizeof(char));
}