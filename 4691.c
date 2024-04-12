void fun()
{
  int entity_7 = 55;
  int entity_6 = 40;
  char* entity_8;
  char* entity_4;
  char entity_0[51] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[52-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_0, 'd', 51-1);
  entity_0[51-1]='';
  strcpy(entity_4, entity_0);
}