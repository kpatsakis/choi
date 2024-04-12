void fun()
{
  int entity_3 = 34;
  char* entity_1;
  char entity_9[91] = "";
  entity_9 = NULL;
  char entity_7 = 'q';
  char entity_6[91] = "";
  entity_6 = NULL;
  memset(entity_9, 'f', 91-1);
  entity_9[91-1]='';
  memset(entity_6, 'C', 91-1);
  entity_6[91-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memcpy(entity_1, entity_6, 91*sizeof(char));
}