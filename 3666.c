void fun()
{
  int entity_9 = 96;
  int entity_0 = 55;
  int entity_6 = 91;
  char entity_3 = 'F';
  char entity_4[92] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'a', 92-1);
  entity_4[92-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  strcpy(entity_5, entity_4);
}