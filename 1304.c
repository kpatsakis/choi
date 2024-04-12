void fun()
{
  char entity_7 = 'T';
  char* entity_0;
  char* entity_1;
  char entity_9[43] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[61-1]='';
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  memset(entity_9, 'C', 43-1);
  entity_9[43-1]='';
  memcpy(entity_0, entity_9, 43*sizeof(char));
}