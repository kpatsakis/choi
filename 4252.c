void fun()
{
  int entity_2 = 13;
  int entity_9 = 97;
  char* entity_0;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  memset(entity_7, 'M', entity_2-1);
  entity_7[entity_2-1]='';
  strcpy(entity_3, entity_7);
}