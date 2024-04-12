void fun()
{
  int entity_4 = 24;
  entity_4 = 8;
  char* entity_1;
  char* entity_0;
  char entity_8[entity_4] = "";
  memset(entity_8, 'c', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, entity_4*sizeof(char));
}