void fun()
{
  char* entity_1;
  char entity_2[36] = "";
  entity_2 = NULL;
  char entity_3[76] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_2, 'q', 36-1);
  entity_2[36-1]='';
  memset(entity_3, 'E', 76-1);
  entity_3[76-1]='';
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[66-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  strcpy(entity_6, entity_2);
}