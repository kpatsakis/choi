void fun()
{
  int entity_5 = 86;
  int entity_9 = 17;
  char entity_4[78] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_1 = 'm';
  memset(entity_4, 'Z', 78-1);
  entity_4[78-1]='';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  strcpy(entity_3, entity_4);
}