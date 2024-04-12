void fun()
{
  int entity_3 = 57;
  char entity_7[50] = "";
  entity_7 = NULL;
  char entity_4[29] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  memset(entity_7, 'm', 50-1);
  entity_7[50-1]='';
  memset(entity_4, 'M', 29-1);
  entity_4[29-1]='';
  strcpy(entity_2, entity_7);
}