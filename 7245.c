void fun()
{
  int entity_2 = 13;
  int entity_4 = 90;
  char entity_0[34] = "";
  entity_0 = NULL;
  char* entity_3;
  char* entity_9;
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[47-1]='';
  memset(entity_0, 'C', 34-1);
  entity_0[34-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  strcpy(entity_3, entity_0);
}