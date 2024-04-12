void fun()
{
  int entity_7 = 64;
  char* entity_4;
  char entity_3 = 'R';
  char entity_2[8] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_2, 'F', 8-1);
  entity_2[8-1]='';
  strcpy(entity_4, entity_2);
}