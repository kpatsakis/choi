void fun()
{
  int entity_5 = 98;
  char* entity_2;
  char* entity_1;
  char entity_8[68] = "";
  entity_8 = NULL;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_8, 'B', 68-1);
  entity_8[68-1]='';
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memset(entity_9, 'o', entity_5-1);
  entity_9[entity_5-1]='';
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[49-1]='';
  entity_5 = 50;
  strcpy(entity_2, entity_9);
}