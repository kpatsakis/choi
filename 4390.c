void fun()
{
  int entity_3 = 32;
  char entity_2[4] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(17*sizeof(char));
  entity_9[17-1]='';
  memset(entity_2, 'd', 4-1);
  entity_2[4-1]='';
  strcpy(entity_9, entity_2);
}