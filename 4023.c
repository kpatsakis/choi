void fun()
{
  int entity_1 = 32;
  char* entity_0;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[9-1]='';
  memset(entity_8, 'e', entity_1-1);
  entity_8[entity_1-1]='';
  memcpy(entity_0, entity_8, entity_1*sizeof(char));
}