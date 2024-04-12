void fun()
{
  int entity_5 = 48;
  entity_5 = 35;
  char entity_4 = 'M';
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_1[88] = "";
  entity_1 = NULL;
  char* entity_8;
  char* entity_0;
  memset(entity_6, 'X', entity_5-1);
  entity_6[entity_5-1]='';
  memset(entity_1, 'm', 88-1);
  entity_1[88-1]='';
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[96-1]='';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[25-1]='';
  memcpy(entity_0, entity_6, entity_5*sizeof(char));
}