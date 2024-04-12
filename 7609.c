void fun()
{
  int entity_6 = 70;
  entity_6 = 15;
  char* entity_2;
  char entity_9[67] = "";
  entity_9 = NULL;
  memset(entity_9, 'H', 67-1);
  entity_9[67-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  strcpy(entity_2, entity_9);
}