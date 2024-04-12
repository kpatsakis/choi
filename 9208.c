void fun()
{
  int entity_2 = 96;
  entity_2 = 94;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'A', entity_2-1);
  entity_6[entity_2-1]='';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  memcpy(entity_7, entity_6, entity_2*sizeof(char));
}