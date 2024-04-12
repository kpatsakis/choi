void fun()
{
  int entity_4 = 1;
  char entity_0[entity_4] = "";
  char* entity_7;
  memset(entity_0, 'G', entity_4-1);
  entity_0[entity_4-1]='0';
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, entity_4*sizeof(char));
}