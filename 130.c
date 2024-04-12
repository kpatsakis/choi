void fun()
{
  char entity_7[25] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_9;
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[38-1]='';
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  memset(entity_7, 'f', 25-1);
  entity_7[25-1]='';
  memcpy(entity_9, entity_7, 25*sizeof(char));
}