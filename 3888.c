void fun()
{
  char entity_7[99] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memset(entity_7, 'R', 99-1);
  entity_7[99-1]='';
  strcpy(entity_6, entity_7);
}