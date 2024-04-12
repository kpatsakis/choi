void fun()
{
  int entity_4 = 69;
  entity_4 = 97;
  char entity_9[68] = "";
  entity_9 = NULL;
  char entity_8 = 'O';
  char* entity_6;
  memset(entity_9, 'N', 68-1);
  entity_9[68-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  strcpy(entity_6, entity_9);
}