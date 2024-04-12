void fun()
{
  int entity_8 = 82;
  char* entity_9;
  char entity_6[83] = "";
  entity_6 = NULL;
  char entity_5[5] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_5, 'f', 5-1);
  entity_5[5-1]='';
  memset(entity_6, 'W', 83-1);
  entity_6[83-1]='';
  entity_8 = 42;
  memcpy(entity_9, entity_6, 83*sizeof(char));
}