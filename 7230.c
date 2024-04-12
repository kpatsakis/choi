void fun()
{
  int entity_4 = 80;
  int entity_8 = 76;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[80-1]='';
  memset(entity_3, 'b', entity_8-1);
  entity_3[entity_8-1]='';
  entity_8 = 38;
  memcpy(entity_0, entity_3, entity_8*sizeof(char));
}