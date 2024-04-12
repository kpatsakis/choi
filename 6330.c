void fun()
{
  char entity_6 = 'n';
  char entity_9[54] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(72*sizeof(char));
  entity_3[72-1]='';
  memset(entity_9, 'j', 54-1);
  entity_9[54-1]='';
  strcpy(entity_3, entity_9);
}