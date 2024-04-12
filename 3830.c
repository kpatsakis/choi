void fun()
{
  int entity_3 = 89;
  int entity_1 = 52;
  char entity_2[78] = "";
  entity_2 = NULL;
  char entity_8[10] = "";
  entity_8 = NULL;
  char* entity_4;
  char entity_0 = 'F';
  memset(entity_8, 'P', 10-1);
  entity_8[10-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_2, 'K', 78-1);
  entity_2[78-1]='';
  strcpy(entity_4, entity_2);
}