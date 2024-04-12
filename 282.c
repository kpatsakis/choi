void fun()
{
  int entity_5 = 25;
  entity_5 = 62;
  char* entity_0;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'b', entity_5-1);
  entity_8[entity_5-1]='';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[59-1]='';
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  memcpy(entity_4, entity_8, entity_5*sizeof(char));
}