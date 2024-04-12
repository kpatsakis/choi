void fun()
{
  int entity_7 = 97;
  int entity_2 = 17;
  char entity_0[65] = "";
  entity_0 = NULL;
  char entity_9[25] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'C', 25-1);
  entity_9[25-1]='';
  memset(entity_0, 'O', 65-1);
  entity_0[65-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  entity_7 = 36;
  strcpy(entity_8, entity_0);
}