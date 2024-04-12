void fun()
{
  int entity_5 = 98;
  char entity_4[45] = "";
  entity_4 = NULL;
  char* entity_9;
  char* entity_8;
  char* entity_7;
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[88-1]='';
  memset(entity_4, 'J', 45-1);
  entity_4[45-1]='';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[43-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  entity_5 = 32;
  strcpy(entity_9, entity_4);
}