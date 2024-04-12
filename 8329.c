void fun()
{
  int entity_4 = 82;
  entity_4 = 82;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_7 = 'O';
  char entity_1 = 'm';
  char* entity_3;
  memset(entity_2, 'O', entity_4-1);
  entity_2[entity_4-1]='';
  entity_3 = (char*)malloc(66*sizeof(char));
  entity_3[66-1]='';
  strcpy(entity_3, entity_2);
}