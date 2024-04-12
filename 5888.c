void fun()
{
  char entity_3[91] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_9 = 'F';
  memset(entity_3, 'K', 91-1);
  entity_3[91-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  strcpy(entity_7, entity_3);
}