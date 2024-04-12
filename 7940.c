void fun()
{
  int entity_2 = 23;
  entity_2 = 72;
  char entity_8[73] = "";
  entity_8 = NULL;
  char* entity_9;
  char* entity_7;
  memset(entity_8, 'r', 73-1);
  entity_8[73-1]='';
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  strcpy(entity_9, entity_8);
}