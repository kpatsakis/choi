void fun()
{
  int entity_4 = 4;
  char* entity_7;
  char entity_5[81] = "";
  entity_5 = NULL;
  char* entity_6;
  char entity_0[25] = "";
  entity_0 = NULL;
  memset(entity_0, 'L', 25-1);
  entity_0[25-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_5, 'l', 81-1);
  entity_5[81-1]='';
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  memcpy(entity_6, entity_0, 25*sizeof(char));
}