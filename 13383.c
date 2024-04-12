void fun()
{
  int entity_1 = 86;
  char* entity_3;
  char entity_8[entity_1] = "";
  memset(entity_8, 'T', entity_1-1);
  entity_8[entity_1-1]='0';
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[0]='0';
  entity_1 = 55;
  memcpy(entity_3, entity_8, entity_1*sizeof(char));
}