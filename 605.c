void fun()
{
  int entity_4 = 9;
  char* entity_2;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_3[49] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  memset(entity_9, 'u', entity_4-1);
  entity_9[entity_4-1]='';
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[24-1]='';
  memset(entity_3, 'd', 49-1);
  entity_3[49-1]='';
  strcpy(entity_8, entity_9);
}