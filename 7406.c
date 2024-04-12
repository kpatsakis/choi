void fun()
{
  int entity_4 = 63;
  entity_4 = 67;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_0;
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  memset(entity_6, 'r', entity_4-1);
  entity_6[entity_4-1]='';
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  memcpy(entity_8, entity_6, entity_4*sizeof(char));
}