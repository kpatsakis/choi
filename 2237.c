void fun()
{
  int entity_0 = 21;
  int entity_6 = 48;
  entity_6 = 83;
  char entity_8 = 's';
  char* entity_9;
  char entity_4[91] = "";
  entity_4 = NULL;
  char entity_7 = 'V';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_4, 'y', 91-1);
  entity_4[91-1]='';
  memcpy(entity_9, entity_4, 91*sizeof(char));
}