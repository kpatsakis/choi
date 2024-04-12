void fun()
{
  int entity_9 = 3;
  entity_9 = 97;
  char entity_6[64] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'X', 64-1);
  entity_6[64-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  strcpy(entity_4, entity_6);
}