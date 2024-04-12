void fun()
{
  int entity_1 = 98;
  char* entity_5;
  char entity_2[36] = "";
  entity_2 = NULL;
  char entity_3 = 'G';
  char* entity_0;
  entity_0 = (char*)malloc(47*sizeof(char));
  entity_0[47-1]='';
  memset(entity_2, 'l', 36-1);
  entity_2[36-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  strcpy(entity_5, entity_2);
}