void fun()
{
  int entity_8 = 94;
  int entity_4 = 38;
  char* entity_0;
  char entity_5[69] = "";
  entity_5 = NULL;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[27-1]='';
  memset(entity_5, 's', 69-1);
  entity_5[69-1]='';
  memset(entity_1, 'f', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 72;
  memcpy(entity_0, entity_1, entity_8*sizeof(char));
}