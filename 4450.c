void fun()
{
  int entity_0 = 98;
  entity_0 = 85;
  char* entity_4;
  char entity_2[46] = "";
  entity_2 = NULL;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'K', entity_0-1);
  entity_8[entity_0-1]='';
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[40-1]='';
  memset(entity_2, 'K', 46-1);
  entity_2[46-1]='';
  memcpy(entity_4, entity_8, entity_0*sizeof(char));
}