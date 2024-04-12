void fun()
{
  int entity_1 = 85;
  char* entity_4;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  memset(entity_0, 'e', entity_1-1);
  entity_0[entity_1-1]='';
  memcpy(entity_4, entity_0, entity_1*sizeof(char));
}