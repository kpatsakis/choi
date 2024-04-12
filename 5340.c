void fun()
{
  int entity_7 = 29;
  char* entity_1;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  memset(entity_2, 'N', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_1, entity_2);
}