void fun()
{
  int entity_0 = 63;
  entity_0 = 84;
  char entity_8[entity_0] = "";
  char* entity_3;
  memset(entity_8, 'N', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_8, entity_0*sizeof(char));
}