void fun()
{
  int entity_6 = 18;
  entity_6 = 56;
  char entity_7[entity_6] = "";
  char* entity_8;
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'y', entity_6-1);
  entity_7[entity_6-1]='0';
  memcpy(entity_8, entity_7, entity_6*sizeof(char));
}