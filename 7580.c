void fun()
{
  int entity_1 = 78;
  char* entity_9;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[25-1]='';
  memset(entity_8, 'K', entity_1-1);
  entity_8[entity_1-1]='';
  entity_1 = 98;
  memcpy(entity_9, entity_8, entity_1*sizeof(char));
}