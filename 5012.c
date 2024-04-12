void fun()
{
  int entity_3 = 43;
  char entity_8[37] = "";
  entity_8 = NULL;
  char entity_1 = 'a';
  char* entity_4;
  memset(entity_8, 'b', 37-1);
  entity_8[37-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  entity_3 = 41;
  memcpy(entity_4, entity_8, 37*sizeof(char));
}