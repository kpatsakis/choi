void fun()
{
  int entity_5 = 7;
  entity_5 = 4;
  char entity_1 = 'w';
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_4 = 'n';
  memset(entity_3, 'F', entity_5-1);
  entity_3[entity_5-1]='';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  memcpy(entity_7, entity_3, entity_5*sizeof(char));
}