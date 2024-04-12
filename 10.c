void fun()
{
  int entity_4 = 65;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(53*sizeof(char));
  entity_6[53-1]='';
  memset(entity_2, 'd', entity_4-1);
  entity_2[entity_4-1]='';
  strcpy(entity_6, entity_2);
}