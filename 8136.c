void fun()
{
  int entity_3 = 4;
  char entity_6 = 'E';
  char* entity_7;
  char entity_1[10] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(91*sizeof(char));
  entity_7[91-1]='';
  memset(entity_1, 'I', 10-1);
  entity_1[10-1]='';
  strcpy(entity_7, entity_1);
}