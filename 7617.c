void fun()
{
  int entity_8 = 25;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  memset(entity_3, 'S', entity_8-1);
  entity_3[entity_8-1]='';
  strcpy(entity_1, entity_3);
}