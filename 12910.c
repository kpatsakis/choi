void fun()
{
  int entity_8 = 33;
  char* entity_7;
  char entity_0[entity_8] = "";
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'N', entity_8-1);
  entity_0[entity_8-1]='0';
  memcpy(entity_7, entity_0, entity_8*sizeof(char));
}