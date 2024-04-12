void fun()
{
  char entity_4 = 'p';
  char entity_9 = 'H';
  char* entity_6;
  char entity_1[60] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', 60-1);
  entity_1[60-1]='';
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[25-1]='';
  memcpy(entity_6, entity_1, 60*sizeof(char));
}