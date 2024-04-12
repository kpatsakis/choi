void fun()
{
  int entity_5 = 62;
  int entity_9 = 33;
  char* entity_4;
  char entity_8[65] = "";
  entity_8 = NULL;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  memset(entity_2, 'z', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_8, 'e', 65-1);
  entity_8[65-1]='';
  entity_9 = 65;
  strcpy(entity_4, entity_2);
}