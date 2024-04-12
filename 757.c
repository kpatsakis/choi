void fun()
{
  int entity_1 = 4;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char entity_6[96] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[89-1]='';
  memset(entity_4, 'z', entity_1-1);
  entity_4[entity_1-1]='';
  memset(entity_6, 'H', 96-1);
  entity_6[96-1]='';
  memcpy(entity_7, entity_4, entity_1*sizeof(char));
}