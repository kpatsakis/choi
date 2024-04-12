void fun()
{
  int entity_8 = 42;
  char entity_9[26] = "";
  entity_9 = NULL;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_0[29] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  memset(entity_0, 'J', 29-1);
  entity_0[29-1]='';
  memset(entity_9, 'h', 26-1);
  entity_9[26-1]='';
  memset(entity_6, 'B', entity_8-1);
  entity_6[entity_8-1]='';
  entity_8 = 67;
  memcpy(entity_3, entity_6, entity_8*sizeof(char));
}