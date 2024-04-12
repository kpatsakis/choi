void fun()
{
  int entity_2 = 71;
  char* entity_8;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[52-1]='';
  memset(entity_6, 'b', entity_2-1);
  entity_6[entity_2-1]='';
  strcpy(entity_8, entity_6);
}