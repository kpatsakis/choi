void fun()
{
  int entity_5 = 30;
  char* entity_6;
  char entity_2[47] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_2, 'p', 47-1);
  entity_2[47-1]='';
  strcpy(entity_6, entity_2);
}