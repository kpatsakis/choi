void fun()
{
  int entity_9 = 73;
  int entity_6 = 67;
  char entity_2[28] = "";
  entity_2 = NULL;
  char entity_3[49] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_2, 'w', 28-1);
  entity_2[28-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_3, 'X', 49-1);
  entity_3[49-1]='';
  strcpy(entity_7, entity_2);
}