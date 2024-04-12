void fun()
{
  int entity_0 = 90;
  char entity_2[16] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_1[41] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', 41-1);
  entity_1[41-1]='';
  memset(entity_2, 'B', 16-1);
  entity_2[16-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  strcpy(entity_7, entity_1);
}