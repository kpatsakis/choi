void fun()
{
  int entity_5 = 26;
  char* entity_0;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  memset(entity_1, 'Z', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_0, entity_1, entity_5*sizeof(char));
}