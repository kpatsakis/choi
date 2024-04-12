void fun()
{
  char entity_9 = 'B';
  char* entity_1;
  char entity_7[13] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  memset(entity_7, 'e', 13-1);
  entity_7[13-1]='';
  strcpy(entity_1, entity_7);
}