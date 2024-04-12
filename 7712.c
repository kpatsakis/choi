void fun()
{
  int entity_0 = 85;
  int entity_2 = 4;
  char entity_9 = 'p';
  char* entity_7;
  char entity_6[87] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_6, 'w', 87-1);
  entity_6[87-1]='';
  strcpy(entity_7, entity_6);
}