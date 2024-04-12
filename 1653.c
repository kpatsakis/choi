void fun()
{
  int entity_6 = 57;
  char* entity_9;
  char entity_7 = 'E';
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'q', entity_6-1);
  entity_8[entity_6-1]='';
  entity_9 = (char*)malloc(34*sizeof(char));
  entity_9[34-1]='';
  entity_6 = 45;
  entity_8[81] = 'h';
}