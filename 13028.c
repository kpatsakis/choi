void fun()
{
  int entity_0 = 59;
  char entity_7[entity_0] = "";
  char* entity_8;
  memset(entity_7, 'f', entity_0-1);
  entity_7[entity_0-1]='0';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[0]='0';
  entity_0 = 52;
  memcpy(entity_8, entity_7, entity_0*sizeof(char));
}