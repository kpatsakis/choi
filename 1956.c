void fun()
{
  int entity_8 = 70;
  entity_8 = 79;
  char* entity_6;
  char entity_5[13] = "";
  entity_5 = NULL;
  char entity_4 = 'Z';
  char entity_0 = 'u';
  memset(entity_5, 'S', 13-1);
  entity_5[13-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_5, 13*sizeof(char));
}