void fun()
{
  int entity_2 = 94;
  char* entity_6;
  char entity_1[64] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_1, 'C', 64-1);
  entity_1[64-1]='';
  entity_2 = 23;
  strcpy(entity_6, entity_1);
}