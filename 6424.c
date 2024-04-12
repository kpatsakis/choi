void fun()
{
  int entity_3 = 4;
  int entity_8 = 68;
  char* entity_7;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_8-1);
  entity_2[entity_8-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  entity_2[30] = 'm';
}