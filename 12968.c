void fun()
{
  int entity_7 = 19;
  char* entity_0;
  char entity_8 = 'E';
  char entity_1[entity_7] = "";
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'F', entity_7-1);
  entity_1[entity_7-1]='0';
  memcpy(entity_0, entity_1, entity_7*sizeof(char));
}