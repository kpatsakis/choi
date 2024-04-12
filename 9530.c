void fun()
{
  char* entity_6;
  char entity_2 = 'W';
  char entity_1[62] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[35-1]='';
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[82-1]='';
  memset(entity_1, 'A', 62-1);
  entity_1[62-1]='';
  strcpy(entity_6, entity_1);
}