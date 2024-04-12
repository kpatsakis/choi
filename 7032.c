void fun()
{
  char entity_7[62] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 'j', 62-1);
  entity_7[62-1]='';
  entity_6 = (char*)malloc(69*sizeof(char));
  entity_6[69-1]='';
  strcpy(entity_6, entity_7);
}