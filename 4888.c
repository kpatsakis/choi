void fun()
{
  char entity_1[26] = "";
  entity_1 = NULL;
  char* entity_2;
  char* entity_5;
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  memset(entity_1, 's', 26-1);
  entity_1[26-1]='';
  strcpy(entity_2, entity_1);
}