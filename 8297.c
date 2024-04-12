void fun()
{
  char entity_9 = 'C';
  char entity_0[93] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'q', 93-1);
  entity_0[93-1]='';
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[84-1]='';
  strcpy(entity_1, entity_0);
}