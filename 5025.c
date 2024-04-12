void fun()
{
  int entity_2 = 2;
  entity_2 = 100;
  char* entity_8;
  char* entity_0;
  char* entity_6;
  char entity_7[39] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[76-1]='';
  entity_8 = (char*)malloc(91*sizeof(char));
  entity_8[91-1]='';
  memset(entity_7, 'a', 39-1);
  entity_7[39-1]='';
  memcpy(entity_6, entity_7, 39*sizeof(char));
}