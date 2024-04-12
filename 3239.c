void fun()
{
  int entity_5 = 7;
  entity_5 = 68;
  char* entity_0;
  char entity_7[89] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', 89-1);
  entity_7[89-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memcpy(entity_0, entity_7, 89*sizeof(char));
}