void fun()
{
  int entity_0 = 50;
  char* entity_3;
  char entity_7 = 'P';
  char entity_1[64] = "";
  entity_1 = NULL;
  memset(entity_1, 'd', 64-1);
  entity_1[64-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_1);
}