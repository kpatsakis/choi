void fun()
{
  int entity_0 = 42;
  int entity_2 = 88;
  char entity_9[2] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_1[11] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_9, 'd', 2-1);
  entity_9[2-1]='';
  memset(entity_1, 'o', 11-1);
  entity_1[11-1]='';
  memcpy(entity_3, entity_9, 2*sizeof(char));
}