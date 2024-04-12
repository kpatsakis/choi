void fun()
{
  int entity_8 = 10;
  entity_8 = 74;
  char entity_6[entity_8] = "";
  char* entity_0;
  memset(entity_6, 'S', entity_8-1);
  entity_6[entity_8-1]='0';
  entity_0 = (char*)malloc(33*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_6, entity_8*sizeof(char));
}