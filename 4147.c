void fun()
{
  int entity_0 = 77;
  int entity_8 = 65;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[11-1]='';
  memset(entity_2, 'D', entity_0-1);
  entity_2[entity_0-1]='';
  strcpy(entity_3, entity_2);
}