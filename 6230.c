void fun()
{
  int entity_3 = 20;
  int entity_5 = 41;
  char entity_6[63] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_8;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_6, 'b', 63-1);
  entity_6[63-1]='';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[1-1]='';
  memcpy(entity_0, entity_6, 63*sizeof(char));
}