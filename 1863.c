void fun()
{
  int entity_6 = 65;
  entity_6 = 65;
  char* entity_4;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[18-1]='';
  memset(entity_2, 't', entity_6-1);
  entity_2[entity_6-1]='';
  strcpy(entity_4, entity_2);
}