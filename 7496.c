void fun()
{
  int entity_5 = 69;
  char entity_0[73] = "";
  entity_0 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_0, 'n', 73-1);
  entity_0[73-1]='';
  entity_5 = 16;
  memcpy(entity_7, entity_0, 73*sizeof(char));
}