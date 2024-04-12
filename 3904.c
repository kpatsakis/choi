void fun()
{
  int entity_3 = 38;
  int entity_9 = 50;
  entity_3 = 67;
  char entity_7[81] = "";
  entity_7 = NULL;
  char entity_8[91] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'Y', 91-1);
  entity_8[91-1]='';
  entity_1 = (char*)malloc(59*sizeof(char));
  entity_1[59-1]='';
  memset(entity_7, 'F', 81-1);
  entity_7[81-1]='';
  entity_8[entity_3] = 'N';
}