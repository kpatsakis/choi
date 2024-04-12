void fun()
{
  int entity_9 = 31;
  int entity_5 = 40;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_1 = 'j';
  char* entity_8;
  memset(entity_6, 'l', entity_5-1);
  entity_6[entity_5-1]='';
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[9-1]='';
  memcpy(entity_8, entity_6, entity_5*sizeof(char));
}