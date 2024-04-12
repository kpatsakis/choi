void fun()
{
  int entity_0 = 22;
  entity_0 = 24;
  char* entity_7;
  char entity_8[entity_0] = "";
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'I', entity_0-1);
  entity_8[entity_0-1]='0';
  memcpy(entity_7, entity_8, entity_0*sizeof(char));
}