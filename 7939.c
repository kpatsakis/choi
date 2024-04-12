void fun()
{
  int entity_1 = 2;
  entity_1 = 96;
  char* entity_2;
  char entity_9[29] = "";
  entity_9 = NULL;
  char* entity_4;
  char* entity_7;
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[40-1]='';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  memset(entity_9, 'M', 29-1);
  entity_9[29-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_9);
}