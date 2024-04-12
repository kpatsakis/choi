void fun()
{
  int entity_8 = 43;
  int entity_5 = 17;
  char* entity_3;
  char entity_7 = 'a';
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(13*sizeof(char));
  entity_3[13-1]='';
  memset(entity_6, 'C', entity_8-1);
  entity_6[entity_8-1]='';
  memcpy(entity_3, entity_6, entity_8*sizeof(char));
}