void fun()
{
  int entity_0 = 36;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_2 = 'o';
  char* entity_4;
  entity_4 = (char*)malloc(43*sizeof(char));
  entity_4[43-1]='';
  memset(entity_3, 'W', entity_0-1);
  entity_3[entity_0-1]='';
  entity_0 = 52;
  strcpy(entity_4, entity_3);
}