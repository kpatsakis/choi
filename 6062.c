void fun()
{
  int entity_9 = 70;
  entity_9 = 44;
  char* entity_8;
  char entity_4[64] = "";
  entity_4 = NULL;
  memset(entity_4, 'd', 64-1);
  entity_4[64-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_4);
}