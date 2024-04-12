void fun()
{
  char entity_0 = 'v';
  char entity_5[11] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  memset(entity_5, 'j', 11-1);
  entity_5[11-1]='';
  strcpy(entity_6, entity_5);
}