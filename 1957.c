void fun()
{
  int entity_5 = 52;
  int entity_6 = 88;
  char entity_2[28] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'J', 28-1);
  entity_2[28-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 98;
  strcpy(entity_3, entity_2);
}