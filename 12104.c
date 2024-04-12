void fun()
{
  int entity_8 = 19;
  char entity_2[entity_8] = "";
  char* entity_0;
  entity_0 = (char*)malloc(81*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'T', entity_8-1);
  entity_2[entity_8-1]='0';
  memcpy(entity_0, entity_2, entity_8*sizeof(char));
}