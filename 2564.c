void fun()
{
  int entity_5 = 2;
  char entity_0[68] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_3;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  entity_3 = (char*)malloc(0*sizeof(char));
  entity_3[0-1]='';
  memset(entity_0, 'c', 68-1);
  entity_0[68-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  strcpy(entity_1, entity_0);
}