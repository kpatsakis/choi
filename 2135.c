void fun()
{
  int entity_4 = 36;
  char* entity_6;
  char entity_1[24] = "";
  entity_1 = NULL;
  char entity_0 = 'I';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_1, 'X', 24-1);
  entity_1[24-1]='';
  memcpy(entity_6, entity_1, 24*sizeof(char));
}