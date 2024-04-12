void fun()
{
  int entity_5 = 30;
  char* entity_6;
  char entity_2 = 't';
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 't', entity_5-1);
  entity_4[entity_5-1]='';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[49-1]='';
  entity_8 = (char*)malloc(66*sizeof(char));
  entity_8[66-1]='';
  entity_5 = 85;
  memcpy(entity_6, entity_4, entity_5*sizeof(char));
}