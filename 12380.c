void fun()
{
  int entity_3 = 64;
  char* entity_8;
  char* entity_4;
  char* entity_7;
  char entity_0[entity_3] = "";
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(82*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'i', entity_3-1);
  entity_0[entity_3-1]='0';
  memcpy(entity_4, entity_0, entity_3*sizeof(char));
}