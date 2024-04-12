void fun()
{
  int entity_7 = 31;
  int entity_0 = 18;
  char* entity_5;
  char* entity_2;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'd', entity_7-1);
  entity_4[entity_7-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[50-1]='';
  strcpy(entity_2, entity_4);
}