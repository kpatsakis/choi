void fun()
{
  int entity_1 = 78;
  entity_1 = 24;
  char* entity_4;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_6[64] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', 64-1);
  entity_6[64-1]='';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[48-1]='';
  memset(entity_8, 'W', entity_1-1);
  entity_8[entity_1-1]='';
  entity_9 = (char*)malloc(78*sizeof(char));
  entity_9[78-1]='';
  memcpy(entity_4, entity_8, entity_1*sizeof(char));
}