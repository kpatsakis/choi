void fun()
{
  int entity_5 = 65;
  char* entity_1;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[5-1]='';
  memset(entity_2, 'r', entity_5-1);
  entity_2[entity_5-1]='';
  entity_5 = 78;
  strcpy(entity_1, entity_2);
}