void fun()
{
  int entity_4 = 88;
  char entity_7[entity_4] = "";
  char entity_6 = 'L';
  char* entity_8;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'v', entity_4-1);
  entity_7[entity_4-1]='0';
  memcpy(entity_8, entity_7, entity_4*sizeof(char));
}