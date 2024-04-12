void fun()
{
  int entity_1 = 35;
  entity_1 = 35;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'e', entity_1-1);
  entity_6[entity_1-1]='';
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  strcpy(entity_2, entity_6);
}