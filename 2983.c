void fun()
{
  int entity_6 = 93;
  int entity_3 = 44;
  char* entity_2;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', entity_6-1);
  entity_4[entity_6-1]='';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  strcpy(entity_2, entity_4);
}