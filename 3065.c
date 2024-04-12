void fun()
{
  int entity_9 = 89;
  entity_9 = 15;
  char* entity_3;
  char entity_6[72] = "";
  entity_6 = NULL;
  char entity_1[64] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_6, 'F', 72-1);
  entity_6[72-1]='';
  memset(entity_1, 'A', 64-1);
  entity_1[64-1]='';
  strcpy(entity_3, entity_1);
}