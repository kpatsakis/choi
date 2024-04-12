void fun()
{
  int entity_7 = 68;
  char* entity_4;
  char entity_0[37] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_0, 'O', 37-1);
  entity_0[37-1]='';
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[88-1]='';
  entity_7 = 54;
  memcpy(entity_8, entity_0, 37*sizeof(char));
}