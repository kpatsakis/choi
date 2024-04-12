void fun()
{
  int entity_7 = 60;
  char entity_5[91] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_6[65] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_5, 'S', 91-1);
  entity_5[91-1]='';
  memset(entity_6, 'q', 65-1);
  entity_6[65-1]='';
  memcpy(entity_0, entity_6, 65*sizeof(char));
}