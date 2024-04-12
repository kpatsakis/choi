void fun()
{
  int entity_8 = 35;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  memset(entity_4, 'W', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_2, entity_4);
}