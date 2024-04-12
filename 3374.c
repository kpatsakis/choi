void fun()
{
  int entity_0 = 97;
  char* entity_7;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', entity_0-1);
  entity_4[entity_0-1]='';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[89-1]='';
  entity_0 = 25;
  memcpy(entity_7, entity_4, entity_0*sizeof(char));
}