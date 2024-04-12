void fun()
{
  int entity_3 = 68;
  int entity_8 = 37;
  char* entity_2;
  char* entity_0;
  char entity_9[52] = "";
  entity_9 = NULL;
  memset(entity_9, 't', 52-1);
  entity_9[52-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[51-1]='';
  entity_8 = 45;
  memcpy(entity_2, entity_9, 52*sizeof(char));
}