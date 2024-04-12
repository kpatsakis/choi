void fun()
{
  int entity_3 = 9;
  char entity_4[52] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'h', 52-1);
  entity_4[52-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_4, 52*sizeof(char));
}