void fun()
{
  int entity_6 = 33;
  char* entity_5;
  char entity_7 = 'X';
  char entity_0[92] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_0, 'T', 92-1);
  entity_0[92-1]='';
  strcpy(entity_5, entity_0);
}