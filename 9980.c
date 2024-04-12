void fun()
{
  int entity_0 = 19;
  int entity_9 = 49;
  entity_9 = 65;
  char* entity_3;
  char entity_6[57] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_6, 'z', 57-1);
  entity_6[57-1]='';
  strcpy(entity_3, entity_6);
}