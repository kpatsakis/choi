void fun()
{
  int entity_9 = 97;
  int entity_3 = 85;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_2 = 'A';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  memset(entity_0, 'b', entity_3-1);
  entity_0[entity_3-1]='';
  memcpy(entity_8, entity_0, entity_3*sizeof(char));
}