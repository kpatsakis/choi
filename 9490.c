void fun()
{
  char* entity_3;
  char entity_2[28] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'S', 28-1);
  entity_2[28-1]='';
  entity_4 = (char*)malloc(26*sizeof(char));
  entity_4[26-1]='';
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[19-1]='';
  strcpy(entity_3, entity_2);
}