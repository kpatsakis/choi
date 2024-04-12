void fun()
{
  int entity_1 = 34;
  int entity_4 = 65;
  entity_1 = 34;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'o', entity_1-1);
  entity_6[entity_1-1]='';
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[93-1]='';
  strcpy(entity_2, entity_6);
}