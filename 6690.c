void fun()
{
  int entity_1 = 15;
  int entity_8 = 11;
  char* entity_7;
  char entity_2[95] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_2, 'X', 95-1);
  entity_2[95-1]='';
  entity_1 = 34;
  strcpy(entity_7, entity_2);
}