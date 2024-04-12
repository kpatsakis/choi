void fun()
{
  int entity_7 = 45;
  char entity_0[52] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'p', 52-1);
  entity_0[52-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memcpy(entity_6, entity_0, 52*sizeof(char));
}