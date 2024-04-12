void fun()
{
  char entity_1[90] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_2[71] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  memset(entity_2, 'W', 71-1);
  entity_2[71-1]='';
  memset(entity_1, 'v', 90-1);
  entity_1[90-1]='';
  memcpy(entity_9, entity_1, 90*sizeof(char));
}