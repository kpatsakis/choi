void fun()
{
  int entity_2 = 36;
  entity_2 = 36;
  char entity_4[34] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[52-1]='';
  memset(entity_8, 'W', entity_2-1);
  entity_8[entity_2-1]='';
  memset(entity_4, 'q', 34-1);
  entity_4[34-1]='';
  strcpy(entity_3, entity_8);
}