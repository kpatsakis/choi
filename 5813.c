void fun()
{
  int entity_1 = 92;
  entity_1 = 63;
  char entity_5[67] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'B', 67-1);
  entity_5[67-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_5);
}