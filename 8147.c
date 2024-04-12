void fun()
{
  int entity_1 = 35;
  entity_1 = 98;
  char* entity_2;
  char entity_8[52] = "";
  entity_8 = NULL;
  memset(entity_8, 'i', 52-1);
  entity_8[52-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memcpy(entity_2, entity_8, 52*sizeof(char));
}