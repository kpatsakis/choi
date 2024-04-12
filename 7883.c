void fun()
{
  int entity_6 = 96;
  int entity_5 = 65;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[41-1]='';
  memset(entity_1, 'E', entity_6-1);
  entity_1[entity_6-1]='';
  strcpy(entity_7, entity_1);
}