void fun()
{
  int entity_0 = 53;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char entity_5 = 'c';
  char entity_9[48] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'F', 48-1);
  entity_9[48-1]='';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  memset(entity_2, 'o', entity_0-1);
  entity_2[entity_0-1]='';
  strcpy(entity_3, entity_2);
}