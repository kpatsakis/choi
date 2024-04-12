void fun()
{
  int entity_0 = 28;
  char entity_2[entity_0] = "";
  char* entity_7;
  char* entity_8;
  memset(entity_2, 'A', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_2, entity_0*sizeof(char));
}