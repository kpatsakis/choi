void fun()
{
  char* entity_4;
  char entity_9[44] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'H', 44-1);
  entity_9[44-1]='';
  entity_4 = (char*)malloc(61*sizeof(char));
  entity_4[61-1]='';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  memcpy(entity_4, entity_9, 44*sizeof(char));
}