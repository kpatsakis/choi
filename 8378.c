void fun()
{
  int entity_0 = 66;
  int entity_4 = 24;
  char* entity_3;
  char entity_2[17] = "";
  entity_2 = NULL;
  memset(entity_2, 'm', 17-1);
  entity_2[17-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  strcpy(entity_3, entity_2);
}