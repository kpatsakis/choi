void fun()
{
  int entity_4 = 94;
  char* entity_0;
  char entity_8[25] = "";
  entity_8 = NULL;
  char entity_9[15] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  memset(entity_8, 'i', 25-1);
  entity_8[25-1]='';
  memset(entity_9, 'B', 15-1);
  entity_9[15-1]='';
  strcpy(entity_2, entity_9);
}