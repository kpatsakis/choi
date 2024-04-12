void fun()
{
  int entity_7 = 90;
  int entity_4 = 48;
  char* entity_1;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'v', entity_4-1);
  entity_3[entity_4-1]='';
  entity_1 = (char*)malloc(52*sizeof(char));
  entity_1[52-1]='';
  entity_4 = 92;
  strcpy(entity_1, entity_3);
}