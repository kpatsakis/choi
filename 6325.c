void fun()
{
  char* entity_7;
  char entity_9[82] = "";
  entity_9 = NULL;
  memset(entity_9, 't', 82-1);
  entity_9[82-1]='';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  strcpy(entity_7, entity_9);
}