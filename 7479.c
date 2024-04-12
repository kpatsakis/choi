void fun()
{
  int entity_0 = 90;
  int entity_3 = 10;
  char entity_7[22] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_2 = 'H';
  memset(entity_7, 'I', 22-1);
  entity_7[22-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  strcpy(entity_6, entity_7);
}