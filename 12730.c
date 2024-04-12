void fun()
{
  int entity_8 = 69;
  char entity_1[entity_8] = "";
  char* entity_3;
  memset(entity_1, 'I', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, entity_8*sizeof(char));
}