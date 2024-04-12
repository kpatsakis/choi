void fun()
{
  int entity_7 = 87;
  char entity_6[34] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_1 = 'p';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_6, 'q', 34-1);
  entity_6[34-1]='';
  memcpy(entity_8, entity_6, 34*sizeof(char));
}