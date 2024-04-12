void fun()
{
  int entity_6 = 10;
  entity_6 = 7;
  char entity_0[89] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_9 = 'e';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_0, 'f', 89-1);
  entity_0[89-1]='';
  strcpy(entity_2, entity_0);
}