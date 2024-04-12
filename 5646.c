void fun()
{
  char* entity_1;
  char entity_9[78] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', 78-1);
  entity_9[78-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  strcpy(entity_1, entity_9);
}