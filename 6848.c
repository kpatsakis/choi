void fun()
{
  int entity_3 = 49;
  int entity_5 = 47;
  char* entity_8;
  char entity_9[23] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', 23-1);
  entity_9[23-1]='';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  entity_9[entity_3] = 'b';
}