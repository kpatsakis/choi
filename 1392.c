void fun()
{
  int entity_7 = 24;
  int entity_5 = 18;
  int entity_4 = 45;
  int entity_3 = 91;
  char entity_2[67] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'Y', 67-1);
  entity_2[67-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  strcpy(entity_9, entity_2);
}