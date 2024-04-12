void fun()
{
  int entity_8 = 13;
  entity_8 = 97;
  char entity_7 = 'Z';
  char* entity_6;
  char entity_5[entity_8] = "";
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'F', entity_8-1);
  entity_5[entity_8-1]='0';
  memcpy(entity_6, entity_5, entity_8*sizeof(char));
}