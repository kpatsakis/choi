void fun()
{
  int entity_4 = 39;
  int entity_5 = 53;
  char* entity_7;
  char* entity_2;
  char entity_1 = 'U';
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(10*sizeof(char));
  entity_7[10-1]='';
  memset(entity_8, 'F', entity_4-1);
  entity_8[entity_4-1]='';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  entity_4 = 50;
  strcpy(entity_7, entity_8);
}