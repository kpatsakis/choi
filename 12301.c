void fun()
{
  int entity_0 = 82;
  char entity_8[entity_0] = "";
  char* entity_3;
  memset(entity_8, 'X', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_8, entity_0*sizeof(char));
}