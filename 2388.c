void fun()
{
  int entity_8 = 79;
  char* entity_4;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[56-1]='';
  memset(entity_6, 'z', entity_8-1);
  entity_6[entity_8-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  entity_8 = 9;
  entity_6[91] = 'h';
}