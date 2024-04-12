void fun()
{
  int entity_6 = 69;
  char entity_8[79] = "";
  entity_8 = NULL;
  char entity_7 = 'P';
  char entity_3 = 'a';
  char entity_5 = 'a';
  char* entity_4;
  memset(entity_8, 'Z', 79-1);
  entity_8[79-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_8, 79*sizeof(char));
}