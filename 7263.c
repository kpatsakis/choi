void fun()
{
  int entity_0 = 12;
  int entity_3 = 76;
  char* entity_4;
  char* entity_2;
  char entity_9[27] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[47-1]='';
  memset(entity_9, 'm', 27-1);
  entity_9[27-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  strcpy(entity_4, entity_9);
}