void fun()
{
  int entity_8 = 32;
  entity_8 = 75;
  char* entity_9;
  char entity_4 = 'M';
  char entity_2[11] = "";
  entity_2 = NULL;
  memset(entity_2, 'r', 11-1);
  entity_2[11-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  strcpy(entity_9, entity_2);
}