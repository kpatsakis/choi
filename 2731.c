void fun()
{
  int entity_4 = 30;
  char* entity_3;
  char entity_8 = 'A';
  char* entity_1;
  char entity_2[8] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memset(entity_2, 'j', 8-1);
  entity_2[8-1]='';
  strcpy(entity_1, entity_2);
}