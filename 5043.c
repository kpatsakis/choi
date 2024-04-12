void fun()
{
  char entity_3[22] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_5 = 'D';
  memset(entity_3, 't', 22-1);
  entity_3[22-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  strcpy(entity_9, entity_3);
}