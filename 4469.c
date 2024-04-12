void fun()
{
  char entity_7[70] = "";
  entity_7 = NULL;
  char entity_6 = 'q';
  char* entity_9;
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  memset(entity_7, 'D', 70-1);
  entity_7[70-1]='';
  strcpy(entity_9, entity_7);
}