void fun()
{
  int entity_3 = 52;
  int entity_0 = 14;
  entity_0 = 43;
  char* entity_1;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'D', entity_0-1);
  entity_4[entity_0-1]='';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  memcpy(entity_1, entity_4, entity_0*sizeof(char));
}