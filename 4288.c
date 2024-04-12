void fun()
{
  int entity_0 = 33;
  int entity_5 = 3;
  char entity_9[17] = "";
  entity_9 = NULL;
  char entity_4 = 'b';
  char* entity_1;
  memset(entity_9, 'X', 17-1);
  entity_9[17-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_9, 17*sizeof(char));
}