void fun()
{
  int entity_1 = 47;
  int entity_6 = 19;
  int entity_0 = 15;
  int entity_2 = 52;
  entity_0 = 33;
  char entity_7[64] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'S', 64-1);
  entity_7[64-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memcpy(entity_9, entity_7, 64*sizeof(char));
}