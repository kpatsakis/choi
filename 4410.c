void fun()
{
  char entity_6 = 'T';
  char* entity_7;
  char entity_4[25] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'H', 25-1);
  entity_4[25-1]='';
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[88-1]='';
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[79-1]='';
  memcpy(entity_7, entity_4, 25*sizeof(char));
}