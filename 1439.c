void fun()
{
  int entity_1 = 59;
  entity_1 = 59;
  char entity_5 = 'B';
  char entity_6 = 'p';
  char* entity_8;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[52-1]='';
  memset(entity_7, 'i', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_8, entity_7);
}