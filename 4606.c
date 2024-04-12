void fun()
{
  int entity_3 = 4;
  int entity_9 = 90;
  char* entity_2;
  char entity_1[52] = "";
  entity_1 = NULL;
  memset(entity_1, 'Z', 52-1);
  entity_1[52-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memcpy(entity_2, entity_1, 52*sizeof(char));
}