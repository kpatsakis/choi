void fun()
{
  int entity_1 = 62;
  char* entity_0;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  memset(entity_4, 'T', entity_1-1);
  entity_4[entity_1-1]='';
  memcpy(entity_0, entity_4, entity_1*sizeof(char));
}