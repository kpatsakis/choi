void fun()
{
  int entity_2 = 34;
  entity_2 = 34;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char entity_5 = 'v';
  char* entity_4;
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  memset(entity_1, 's', entity_2-1);
  entity_1[entity_2-1]='';
  strcpy(entity_4, entity_1);
}