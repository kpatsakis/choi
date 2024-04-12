void fun()
{
  int entity_2 = 41;
  int entity_3 = 37;
  char* entity_5;
  char* entity_8;
  char* entity_4;
  char entity_0[49] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  entity_4 = (char*)malloc(0*sizeof(char));
  entity_4[0-1]='';
  memset(entity_0, 'b', 49-1);
  entity_0[49-1]='';
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[52-1]='';
  strcpy(entity_5, entity_0);
}