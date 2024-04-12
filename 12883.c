void fun()
{
  int entity_0 = 72;
  char* entity_6;
  char entity_8[entity_0] = "";
  char* entity_3;
  memset(entity_8, 'L', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_6 = (char*)malloc(31*sizeof(char));
  entity_6[0]='0';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_6, entity_8, entity_0*sizeof(char));
}