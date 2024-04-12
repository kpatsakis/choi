void fun()
{
  int entity_7 = 61;
  char entity_0 = 'l';
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_6[84] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memset(entity_9, 'U', entity_7-1);
  entity_9[entity_7-1]='';
  memset(entity_6, 'z', 84-1);
  entity_6[84-1]='';
  entity_7 = 53;
  memcpy(entity_8, entity_9, entity_7*sizeof(char));
}