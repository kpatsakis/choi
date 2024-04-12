void fun()
{
  int entity_3 = 41;
  char* entity_4;
  char entity_6[3] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_6, 't', 3-1);
  entity_6[3-1]='';
  memcpy(entity_4, entity_6, 3*sizeof(char));
}