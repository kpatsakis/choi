void fun()
{
  int entity_7 = 37;
  char* entity_1;
  char* entity_0;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  entity_1 = (char*)malloc(52*sizeof(char));
  entity_1[52-1]='';
  memset(entity_6, 'E', entity_7-1);
  entity_6[entity_7-1]='';
  strcpy(entity_1, entity_6);
}