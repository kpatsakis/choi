void fun()
{
  int entity_2 = 23;
  char entity_0 = 'c';
  char entity_7 = 'Q';
  char entity_9[28] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  memset(entity_9, 'n', 28-1);
  entity_9[28-1]='';
  strcpy(entity_8, entity_9);
}