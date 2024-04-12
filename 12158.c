void fun()
{
  int entity_8 = 64;
  char entity_2[entity_8] = "";
  char* entity_0;
  entity_0 = (char*)malloc(47*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 't', entity_8-1);
  entity_2[entity_8-1]='0';
  memcpy(entity_0, entity_2, entity_8*sizeof(char));
}