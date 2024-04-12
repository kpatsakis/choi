void fun()
{
  int entity_8 = 48;
  int entity_2 = 88;
  char* entity_5;
  char entity_7 = 'c';
  char entity_9[44] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[52-1]='';
  memset(entity_9, 'r', 44-1);
  entity_9[44-1]='';
  entity_9[entity_2] = 'Q';
}