void fun()
{
  int entity_5 = 77;
  entity_5 = 77;
  char* entity_2;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  memset(entity_3, 'c', entity_5-1);
  entity_3[entity_5-1]='';
  strcpy(entity_2, entity_3);
}