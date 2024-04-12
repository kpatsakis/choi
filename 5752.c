void fun()
{
  int entity_3 = 49;
  int entity_0 = 83;
  char* entity_7;
  char entity_8[63] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_8, 'h', 63-1);
  entity_8[63-1]='';
  memcpy(entity_9, entity_8, 63*sizeof(char));
}