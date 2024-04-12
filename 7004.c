void fun()
{
  int entity_8 = 13;
  entity_8 = 93;
  char* entity_4;
  char entity_3 = 'i';
  char entity_6[72] = "";
  entity_6 = NULL;
  memset(entity_6, 'n', 72-1);
  entity_6[72-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_6, 72*sizeof(char));
}