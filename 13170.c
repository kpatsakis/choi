void fun()
{
  int entity_6 = 52;
  entity_6 = 77;
  char entity_0 = 'y';
  char entity_8[entity_6] = "";
  char* entity_7;
  memset(entity_8, 'P', entity_6-1);
  entity_8[entity_6-1]='0';
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_8, entity_6*sizeof(char));
}