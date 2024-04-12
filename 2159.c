void fun()
{
  int entity_8 = 42;
  char* entity_7;
  char entity_0[71] = "";
  entity_0 = NULL;
  char entity_1 = 'K';
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', entity_8-1);
  entity_4[entity_8-1]='';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  memset(entity_0, 'b', 71-1);
  entity_0[71-1]='';
  memcpy(entity_7, entity_4, entity_8*sizeof(char));
}