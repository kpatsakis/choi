void fun()
{
  int entity_9 = 90;
  char entity_3[18] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'O', 18-1);
  entity_3[18-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  strcpy(entity_4, entity_3);
}