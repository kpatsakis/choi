void fun()
{
  int entity_9 = 69;
  int entity_4 = 3;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_3 = 'F';
  char* entity_7;
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[79-1]='';
  memset(entity_6, 'A', entity_4-1);
  entity_6[entity_4-1]='';
  strcpy(entity_7, entity_6);
}