void fun()
{
  int entity_5 = 76;
  entity_5 = 24;
  char entity_2[49] = "";
  entity_2 = NULL;
  char* entity_4;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_2, 'q', 49-1);
  entity_2[49-1]='';
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[49-1]='';
  memcpy(entity_0, entity_2, 49*sizeof(char));
}