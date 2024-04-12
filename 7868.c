void fun()
{
  int entity_0 = 70;
  int entity_7 = 46;
  char entity_1[58] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_9;
  char entity_8 = 'Q';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_1, 'O', 58-1);
  entity_1[58-1]='';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memcpy(entity_5, entity_1, 58*sizeof(char));
}