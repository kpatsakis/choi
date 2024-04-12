void fun()
{
  int entity_5 = 74;
  char* entity_0;
  char entity_6 = 'm';
  char entity_1[32] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[25-1]='';
  memset(entity_1, 'Y', 32-1);
  entity_1[32-1]='';
  memcpy(entity_0, entity_1, 32*sizeof(char));
}