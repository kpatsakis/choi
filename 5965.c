void fun()
{
  int entity_5 = 96;
  char* entity_1;
  char* entity_8;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', entity_5-1);
  entity_0[entity_5-1]='';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[43-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memcpy(entity_8, entity_0, entity_5*sizeof(char));
}