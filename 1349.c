void fun()
{
  int entity_4 = 49;
  entity_4 = 13;
  char* entity_3;
  char* entity_5;
  char entity_1[91] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_1, 'z', 91-1);
  entity_1[91-1]='';
  memcpy(entity_3, entity_1, 91*sizeof(char));
}