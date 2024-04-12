void fun()
{
  int entity_0 = 80;
  char entity_1[39] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_1, 'C', 39-1);
  entity_1[39-1]='';
  memcpy(entity_7, entity_1, 39*sizeof(char));
}