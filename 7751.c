void fun()
{
  char entity_3 = 'g';
  char entity_7[24] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[15-1]='';
  memset(entity_7, 'z', 24-1);
  entity_7[24-1]='';
  strcpy(entity_9, entity_7);
}