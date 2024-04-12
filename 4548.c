void fun()
{
  int entity_3 = 18;
  char entity_4 = 'r';
  char* entity_5;
  char entity_9[68] = "";
  entity_9 = NULL;
  char* entity_8;
  char* entity_6;
  memset(entity_9, 'G', 68-1);
  entity_9[68-1]='';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[49-1]='';
  strcpy(entity_8, entity_9);
}