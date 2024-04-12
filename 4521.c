void fun()
{
  int entity_7 = 9;
  int entity_0 = 26;
  int entity_8 = 5;
  entity_0 = 22;
  char entity_9[16] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_2[1] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', 1-1);
  entity_2[1-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_9, 'g', 16-1);
  entity_9[16-1]='';
  strcpy(entity_5, entity_2);
}