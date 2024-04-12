void fun()
{
  char* entity_9;
  char entity_7[61] = "";
  entity_7 = NULL;
  char entity_8[74] = "";
  entity_8 = NULL;
  memset(entity_7, 'V', 61-1);
  entity_7[61-1]='';
  memset(entity_8, 'E', 74-1);
  entity_8[74-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  strcpy(entity_9, entity_7);
}