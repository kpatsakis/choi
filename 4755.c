void fun()
{
  int entity_5 = 38;
  entity_5 = 5;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char entity_8 = 'a';
  char* entity_6;
  memset(entity_0, 'a', entity_5-1);
  entity_0[entity_5-1]='';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  memcpy(entity_6, entity_0, entity_5*sizeof(char));
}