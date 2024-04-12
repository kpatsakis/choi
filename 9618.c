void fun()
{
  int entity_9 = 95;
  int entity_5 = 51;
  char entity_4[16] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_3 = 'l';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_4, 'u', 16-1);
  entity_4[16-1]='';
  strcpy(entity_6, entity_4);
}