void fun()
{
  int entity_0 = 67;
  entity_0 = 69;
  char entity_8[entity_0] = "";
  char* entity_7;
  char entity_1[84] = "";
  memset(entity_8, 'O', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'O', 84-1);
  entity_1[84-1]='0';
  memcpy(entity_7, entity_8, entity_0*sizeof(char));
}