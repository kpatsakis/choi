void fun()
{
  int entity_5 = 96;
  char* entity_3;
  char entity_0[89] = "";
  entity_0 = NULL;
  memset(entity_0, 'h', 89-1);
  entity_0[89-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memcpy(entity_3, entity_0, 89*sizeof(char));
}