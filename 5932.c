void fun()
{
  int entity_7 = 60;
  char* entity_3;
  char entity_4[20] = "";
  entity_4 = NULL;
  memset(entity_4, 'W', 20-1);
  entity_4[20-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  strcpy(entity_3, entity_4);
}