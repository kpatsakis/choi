void fun()
{
  int entity_4 = 85;
  int entity_7 = 92;
  entity_4 = 44;
  char entity_6[77] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_6, 'e', 77-1);
  entity_6[77-1]='';
  strcpy(entity_2, entity_6);
}